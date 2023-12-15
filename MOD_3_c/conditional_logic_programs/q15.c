// 15.Write a C program to determine eligibility for admission to a professional
// course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
// in Chem>=50 and Total in all three subject >=190 or Total in Maths and
// Physics >=140 ------------------------------------- Input the marks obtained in
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
#include<stdio.h>
int main(){
    int markMaths,markPhysics,markChemistry,mathPhysics,total;

    printf("\nEnter Math Marks: ");
    scanf("%d",&markMaths);

    printf("\nEnter Physics Marks: ");
    scanf("%d",&markPhysics);

    printf("\nEnter Chemistry Marks: ");
    scanf("%d",&markChemistry);

    mathPhysics = markMaths + markPhysics;
    total = markMaths + markPhysics + markChemistry;

    if((total>=190 && markMaths>=65 && markPhysics>=55 && markChemistry>=50) && (mathPhysics>=140)){
        printf("\nYou are eligible for admission");
    }else{
        printf("\nYou are not eligible for admission");

    }
    return 0;
}