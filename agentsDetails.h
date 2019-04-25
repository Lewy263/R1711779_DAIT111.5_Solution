/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   agentsDetails.h
 * Author: King_Lewy
 *
 * Created on April 24, 2019, 9:13 PM
 */

#ifndef AGENTSDETAILS_H
#define AGENTSDETAILS_H
#include <iostream>
#include <fstream>
#include <cstdlib>
#include<cstring>
#include "agentsDetails.h"

using namespace std;

class AgentDetails {
    char Fname[40];
    char empNum[8];
    char address[50];
    char emailAddress[50];
    char HomeAddress[50];
    char phoneNumber[10];


public:
   AgentDetails();
   AgentDetails(char *name,char *eNum, char * eAddress, char *Haddress, char *pNumber);
   void GetDetails();
   void WriteToFile(AgentDetails agentdetails);
   void ReadFile(streamsize pos);
   void RecordRecordPos();
   void ReadRecordPos();
};


#endif /* AGENTSDETAILS_H */

