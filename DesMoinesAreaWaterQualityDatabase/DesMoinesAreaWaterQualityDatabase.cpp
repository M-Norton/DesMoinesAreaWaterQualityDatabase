// DesMoinesAreaWaterQualityDatabase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    //Title graphic
    std::cout << R"(                                                 
  ____  __  __    _    ____ ____ 
 |  _ \|  \/  |  / \  / ___/ ___|
 | | | | |\/| | / _ \| |  | |    
 | |_| | |  | |/ ___ \ |__| |___ 
 |____/|_|  |_/_/   \_\____\____|
                                 
EGR 155 - Engineering C/C++
Dev Team:   Hang Thang
            Taegen Duncan
            Matt Norton

Instructor: Dr. Edris Ebrahimzadeh


 A Des Moines Area Water Quality Database    

=========================================
=========================================                                                
)" << '\n';

    //Hard code a 2D array database, data source: DMACC CHM165 class fall 2020: 

            //pH sample location names, in same order as pHData:
    string pHLocation[80] = { "Altoona HyVee Purified Water","Ames Home Purified Water","Ames Tap Water",
        "Ankeny Tap (R)","Ankeny tap Water","Ankeny Tap Water (E)","Ankeny Toilet Water","Aquafina","Aquafina",
        "Atlantic Tap","Beaverdale Tap Water","Body Armor","Boiler Water","Boone Bathroom","Boone Campus Fountain",
        "Bottled Water","Cold Lime Softened Water","Creek Water","Dasani","Distilled Water","DSM River","DSM Tap",
        "DSM Tap Water","Easter Lake","Essential Overachieving Water (Bottled)","Evian Natural Spring Water","Farm Creek",
        "Fiji Natural Artesian (bottled water)","Fiji Water","Filtered DSM Water","Filtered Water (Ankeny)",
        "Filtered Water from Jewell","Filtered Well Water","Fish Tank Water","Fourmile Creek Water","Great Value",
        "Grimes Tap Water","Guthrie Center Tap","Hot Tub – Ames (Americ Inn)","Hot Tub Water","Ice Mountain Bottled Water",
        "Ion-Exchange Water","Johnston Tap Water","Kitchen Faucet","Life Water","Melted Snow","Norwalk Creek Water",
        "Norwalk Tap Water","P. C. Snow Water","Pleasant Hill Tap Water","Pond Water","Pond Water","Pool -  Urbandale",
        "Pool – Ames Americ Inn","Pool Water","Puraqua Water (bottled)","RO Water (from purification?)","Saylorville Lake Water",
        "Shower Water","Tap from Perry","Tap P.C.","Tap water","Tap Water","Tap Water (Polk County)","Tap Water from Perry",
        "Toilet Water","Unfiltered Well Water","UNI Tap Water","Urban Campus Bathroom","Urban Campus Fountain",
        "Urbandale / Windsor Height Creek","Urbandale Toilet Water","Water Extracted from Snow","Water fountain","Water from Cooling Tower",
        "Well Water","Well Water (Jewell)","Wells Fargo, Des Moines","West Campus Bathroom","West Campus Fountain" };

    //pH sample values, 3 trials per sample location, in same order as pHLocation:
    double pHData[80][3] = { {7.77,7.69,7.06},{6.94,7.1,7.13},{8.86,8.95,9.05},{8.1,8.3,8.5},{8.72,8.67,8.67},
        {8.4,8.5,8.6},{7.68,7.82,7.81},{7.03,6.9,6.85},{5.53,5.36,5.34},{8.4,8.2,8.1},{9.1,9.2,9.2},{7.25,7.45,8.35},
        {7.71,7.8,7.86},{8.9,9,9},{9,9.1,9.1},{7.24,7.27,7.25},{8.34,8.16,7.9},{7.4,7.16,7.14},{6,5.8,5.64},{8.21,8.05,8},
        {7.56,7.61,7.61},{8.02,8.12,8.1},{8.35,8.77,8.91},{6.81,6.83,6.85},{9.77,9.82,9.8},{7.23,7.35,7.38},{7.55,7.71,7.74},
        {7.81,7.44,7.38},{7.15,7.2,7.25},{7.9,7.95,7.94},{7.96,8,7.89},{7.21,7.24,7.28},{6.53,6.58,7.61},{7.11,7.16,7.19},
        {8.26,8.16,8.16},{7.32,7.18,7.06},{8.9,9.1,9.2},{7.3,7.3,7.3},{7.58,7.62,7.66},{7.61,7.45,7.38},{7.55,7.72,7.75},
        {8.12,8.03,7.97},{8.89,9.06,8.96},{9.11,9.15,9.16},{6.25,6.4,6.55},{7.86,7.82,7.76},{7.75,7.79,7.65},{9.01,9.1,9.16},
        {6.27,6.08,6.15},{9.4,9.39,9.44},{7.31,7.57,7.7},{6.91,6.89,6.87},{7.13,7.12,7.11},{7.21,7.28,7.3},{7.2,7.15,7.14},
        {8.24,8.11,8.04},{7.7,7.66,7.67},{7,7.22,7.23},{9.03,9.08,9.08},{8.84,9.04,9.08},{7.42,7.5,7.51},{7.21,7.37,7.44},
        {8.15,8.3,8.38},{7.43,7.47,7.51},{8.67,8.93,9.04},{7.4,7.59,7.6},{7.79,7.83,7.83},{7.4,7.4,7.5},{9,8.9,9},{9.1,9,9},
        {7.08,7.22,7.24},{8.64,9.12,9.05},{6.68,6.62,6.61},{7.85,8.11,8.22},{7,6.95,6.95},{6.95,7,7.04},{7.19,7.1,7.22},
        {8.8,9,9.1},{8.7,9,8.9},{8.8,8.9,8.8} };




    //create a parallel 2D array whose first column contains the average (mean) of each water sample :




    //the second column shows the standard deviation




    //the third column shows the acidity of each water sample based on the calculated average value 




    //Ask user to enter a water acidity sample source location:




    //Display Avg.pH; St.Dev; and Acidiy of user chosen water source:




    //Store ppm data in 2D array:
            //ppm sample location names, in same order as ppmData:
    string ppmLocation[30] = { "Hy Vee drinking water","DMACC Filtered water station","Great value distilled water",
        "Sam's Choice purified water","Hot tub water","Fertilized water","Clive tap water","Creek water","Urbandale tap water",
        "Fountain water","Smart water","Flavored water","Tap 1 from lab","tap 2 from lab","Distilled water","Spring water ",
        "Alkaline water","Easter 1 water","Toilet water","Pool water","Smart water","Shower water","Tap water ","Sooda water",
        "Bottled water","Tap water ","Water from DMACC rest room","Bathtub water","Tap water ","Park water" };
    //ppm sample values, in same order as ppmLocation:
    double ppmData[30] = { {6.9},{64.1},{267.4},{12.1},{51.5},{69.9},{78.5},{328.2},{62.4},{80.2},{16.9},{104.7},
        {60.6},{43.6},{176.4},{214.4},{4.01},{57},{62.1},{266.2},{7.56},{57.9},{59.5},{47.6},{193.7},{27},{37.5},
        {25.3},{37.1},{1540} };


    //Create a parallel 1D array of the St.Dev of ppm for each water sample:




    //Ask user to enter a water hardness sample source location:




    //Display ppm, and St.Dev of user chosen water source:





    return 0;
}//end main
