/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: King_Lewy
 *
 * Created on April 24, 2019, 9:13 PM
 */

#include <iostream>
#include<fstream>
#include<cstring>
#include <cstdlib>
#include "agentsDetails.h"

using namespace std;

void WriteToFile(AgentDetails agentdetails);

void GetAgentDetails() {
    char op;
    char Fullname[40];
    char employeeNum[8];
    char emailAdd[50];
    char HomeAdd[50];
    char phoneNum[10];
    do {
        cout << "Enter Agent Full Name:";
        cin.getline(Fullname, 40);
        cout <<endl<< "Enter Employee Number: ";
        cin.getline(employeeNum, 8);
        cout <<endl<< "Enter Email-Address: ";
        cin.getline(emailAdd, 50);
        cout <<endl<< "Enter Home Address: ";
        cin.getline(HomeAdd, 50);
        cout <<endl<< "Enter Phone Number: ";
        cin.getline(phoneNum, 10);
        AgentDetails agentDetails(Fullname, employeeNum, emailAdd, HomeAdd, phoneNum);
        WriteToFile(agentDetails);
        cout <<endl<< "Another record 'Y-Yes' or 'N-No'>" << endl;
        op = getchar();
        cin.ignore();

    } while (op != 'N');

}

void WriteToFile(AgentDetails agentdetails) {
    ofstream outFile("agentsdetails", ios::app | ios::binary);
    outFile.write((char*) &agentdetails, sizeof (AgentDetails));
    outFile.flush();
    if (outFile) {
        cout << endl << "Record has been saved successfully";
    } else
        cout << endl << "Failed! Error saving file";
    outFile.close();

}

void ReadFile(streamsize pos);

void ReadRecordPos() {
    streamsize pos;
    cout << "Enter the record number to retrieve...";
    cin>>pos;
    ReadFile(pos);
}

void ReadFile(streamsize pos) {

    AgentDetails agentsdetails;
    
    ifstream inFile("agentdetails", ios::in | ios::binary);
    inFile.seekg(sizeof (AgentDetails)*(pos - 1), ios::beg);
    inFile.read((char *) &agentsdetails, sizeof (AgentDetails));
    agentsdetails.GetDetails();
}

int main(int argc, char** argv) {
    GetAgentDetails();
    ReadRecordPos();
    return 0;
}

