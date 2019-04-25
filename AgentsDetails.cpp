/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "agentsDetails.h"
#include <iostream>
#include<fstream>
#include<cstring>
#include <cstdlib>

using namespace std;


AgentDetails::AgentDetails(){

}

AgentDetails::AgentDetails(char* name, char* eNum, char* eAddress, char* Haddress, char* pNumber){
    strcpy(Fname, name);
    strcpy(empNum, eNum);
    strcpy(emailAddress,eAddress);
    strcpy(HomeAddress,Haddress);
    strcpy(phoneNumber,pNumber);
}

    void AgentDetails::GetDetails(){
    
    cout <<endl<<endl<< "Agent's Full Name: " << Fname ;
    cout <<endl<< "Employee Number: "<< empNum ;
    cout <<endl<< "Email Address: "<< emailAddress;
    cout<<"Home Address: "<<HomeAddress;
    cout<<endl<<"Phone Number: "<<phoneNumber;
}
