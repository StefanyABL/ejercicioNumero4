/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Stefany
 *
 * Created on 9 de septiembre de 2019, 05:23 PM
 */

#include <cstdlib>
#include <iostream>


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string name;
    char gender;
    short int age;
    cout<<"Nombre . . . . : " ;
    getline ( cin , name ) ;
    cout<<"Edad . . . . . . : " ;
    cin>>age ;
    cin.ignore( ) ;
    cout<<"Genero . . . : " ;
    
    cin.get ( gender ) ;
    cout<<name<<endl<<gender<<endl<<age<<endl ;

   return EXIT_SUCCESS;
}

