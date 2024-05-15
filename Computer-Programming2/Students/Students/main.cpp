//
//  main.cpp
//  Students
//
//  Created by Carlos Surillo on 12/8/22.
//

#include<iostream>
#include <string>
using namespace::std;
#include "StudentTestScores.hpp"
int main()
{
      StudentTestScores std1("Juan Casado",3),
                        std2("Luis Gomez", 4);
      double score;
      int index;
      cout << "Entre las "<<std1.getNumTestScores()
           <<" notas del estudiante "
           << std1.getStudentName() << ":" << endl;
      for (index = 0; index<std1.getNumTestScores(); index++){
           cin >> score;
           std1.setTestScore(score, index);
      }//end for
      std1.display();
      cout << "Entre las "<< std2.getNumTestScores()
           << " notas del estudiante "
           << std2.getStudentName() << ":" << endl;
      for (index = 0; index<std2.getNumTestScores(); index++){
           cin >> score;
           std2.setTestScore(score, index);
      }//end for
      std2.display();
      //Copy Constructor
      StudentTestScores std3(std1);
      std3.display();
      
      return 0;
}//end main
