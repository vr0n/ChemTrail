//
//  main.cpp
//  C++ Test
//
//  Created by Zachary Taylor on 12/22/16.
//  Copyright © 2016 RGB. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void ionCharges();
void findElement();
void findCharge();
void SIUnits();

int main() {
    int menuVal;
    
    cout << "Welcome to the Chemistry Thingy\n\n" << endl;
    do{
        //After going through the menu several times, I found that the program will seemingly arbitrarily enter an infinite loop. In an attempt to fix this, I am initiliazing the variables used in the functions at the beginning of loops to a value that doesn't matter to the program. I thought this would help, because the values seemed to get stuck on one of the menu options
        menuVal = 0;
        
        cout << "Choose One Of The Following:\n";
        cout << "1 - Ionization Charges\n";
        cout << "2 - Enter Protons; See Element\n";
        cout << "3 - SI Units\n";
        cout << "4 - Quit\n";
        cin >> menuVal;
        
        if(menuVal == 1){
            ionCharges();
        }
        else if(menuVal == 3){
            SIUnits();
        }
    }while(menuVal != 4);
    return 0;
}

void ionCharges(){
    int val;
    cout << "Choose One:\n";
    cout << "1 - Enter an Element Name or Symbol\n";
    cout << "2 - Enter a charge value (include '+' or '-';e.g. 1+ or 2-)\n";
    cin >> val;
    
    while((val != 1) && (val != 2)){
        cout << "Please enter a legitimate value\n";
        cin >> val;
    }
    
    if(val == 1){
        findElement();
    }
    else if(val == 2){
        findCharge();
    }
    
    return;
}

void findElement(){
    //declare initial variables
    ifstream inFile;
    ofstream outFile;
    string ele, charge;
    
    cout << "Enter the name or Symbol of the Element You Would Like to Know the Charge Of\n";
    //based on the printable periodic table found at sciencenotes.org
    cin >> ele;
    
    
    if((ele == "H") || (ele == "h") || (ele == "Hydrogen") || (ele == "hydrogen") || (ele == "Li") || (ele == "li") || (ele == "lithium") || ( ele == "Lithium") || (ele == "Na") || (ele == "na") || (ele == "Sodium") || (ele == "sodium") || (ele == "K") || (ele == "k") || (ele == "potassium") || (ele == "Potassium") || (ele == "Rb") || (ele == "rb") || (ele == "rubidium") || ( ele == "Rubidium") || (ele == "Cs") || (ele == "cs") || (ele == "Cesium") || (ele == "cesium") || (ele == "Fr") || (ele == "fr") || (ele == "Francium") || (ele == "francium") || (ele == "Ag") || (ele == "ag") || (ele == "Silver") || (ele == "silver")){
        cout << "1+\n";
        charge = "You typed '" + ele + "' which has a charge of 1+.\n";
    }
    else if((ele == "Be") || (ele == "be") || (ele == "beryllium") || (ele == "Beryllium") || (ele == "Mg") || (ele == "mg") || (ele == "magnesium") || ( ele == "Magnesium") || (ele == "Ca") || (ele == "ca") || (ele == "Calcium") || (ele == "calcium") || (ele == "Sr") || (ele == "sr") || (ele == "Strontium") || (ele == "strontium") || (ele == "Ba") || (ele == "ba") || (ele == "Barium") || ( ele == "barium") || (ele == "Ra") || (ele == "ra") || (ele == "Radium") || (ele == "radium") || (ele == "Ni") || (ele == "ni") || (ele == "Nickel") || ( ele == "nickel") || (ele == "Zn") || (ele == "zn") || (ele == "Zinc") || (ele == "zinc") || (ele == "Cd") || (ele == "cd") || (ele == "Cadmium") || (ele == "cadmium") || (ele == "Pb") || (ele == "pb") || (ele == "Lead") || (ele == "lead")){
        cout << "2+\n";
        charge = "You typed '" + ele + "' which has a charge of 2+.\n";
    }
    else if((ele == "Sc") || (ele == "sc") || (ele == "Scandium") || (ele == "scandium") || (ele == "Y") || (ele == "y") || (ele == "Yttrium") || ( ele == "yttrium") || (ele == "La") || (ele == "la") || (ele == "Lanthanum") || (ele == "lanthanum") || (ele == "Ac") || (ele == "ac") || (ele == "actinium") || (ele == "Actinium") || (ele == "Ce") || (ele == "ce") || (ele == "cerium") || (ele == "Cerium") || (ele == "Ac") || (ele == "ac") || (ele == "Actinium") || (ele == "actinium") || (ele == "Au") || (ele == "au") || (ele == "Gold") || (ele == "gold") || (ele == "B") || (ele == "b") || (ele == "Boron") || (ele == "boron") || (ele == "Al") || (ele == "al") || (ele == "Aluminum") || (ele == "aluminum") || (ele == "Ga") || (ele == "ga") || (ele == "Gallium") || (ele == "gallium") || (ele == "In") || (ele == "in") || (ele == "Indium") || (ele == "indium") || (ele == "Sb") || (ele == "sb") || (ele == "Antimony") || (ele == "antimony") || (ele == "Bi") || (ele == "bi") || (ele == "Bismuth") || (ele == "bismuth")){
        cout << "3+\n";
        charge = "You typed '" + ele + "' which has a charge of 3+.\n";
    }
    else if((ele == "Ti") || (ele == "ti") || (ele == "Titanium") || (ele == "titanium") || (ele == "Zr") || (ele == "zr") || (ele == "Zirconium") || ( ele == "zirconium") || (ele == "Hf") || (ele == "hf") || (ele == "Hafnium") || (ele == "hafnium") || (ele == "Rf") || (ele == "rf") || (ele == "Rutherfordium") || (ele == "rutherfordium") || (ele == "Th") || (ele == "th") || (ele == "Thorium") || (ele == "thorium") || (ele == "Os") || (ele == "os") || (ele == "Osmium") || (ele == "osmium") || (ele == "Si") || (ele == "si") || (ele == "Silicon") || (ele == "silicon") || (ele == "Ge") || (ele == "ge") || (ele == "Germanium") || (ele == "germanium") || (ele == "Po") || (ele == "po") || (ele == "Polonium") || (ele == "polonium")){
        cout << "4+\n";
        charge = "You typed '" + ele + "' which has a charge of 4+.\n";
    }
    else if((ele == "Nb") || (ele == "nb") || (ele == "Niobium") || (ele == "niobium") || (ele == "Ta") || (ele == "ta") || (ele == "Tantalum") || ( ele == "tantalum")){
        cout << "5+\n";
        charge = "You typed '" + ele + "' which has a charge of 5+.\n";
    }
    else if((ele == "He") || (ele == "he") || (ele == "Helium") || (ele == "helium") || (ele == "Ne") || (ele == "ne") || (ele == "Neon") || ( ele == "neon") || (ele == "Ar") || (ele == "ar") || (ele == "Argon") || (ele == "argon") || (ele == "Kr") || (ele == "kr") || (ele == "Krypton") || (ele == "krypton") || (ele == "Xe") || (ele == "xe") || (ele == "Xenon") || ( ele == "xenon") || (ele == "Rn") || (ele == "rn") || (ele == "Radon") || (ele == "radon")){
        cout << "0\n";
        charge = "You typed '" + ele + "' which has a charge of 0.\n";
    }
    else if((ele == "F") || (ele == "f") || (ele == "Fluorine") || (ele == "fluorine") || (ele == "Cl") || (ele == "cl") || (ele == "Chlorine") || ( ele == "chlorine") || (ele == "At") || (ele == "at") || (ele == "Astatine") || (ele == "astatine")){
        cout << "1-\n";
        charge = "You typed '" + ele + "' which has a charge of 1-.\n";
    }
    else if((ele == "O") || (ele == "o") || (ele == "Oxygen") || (ele == "oxygen") ){
        cout << "2-\n";
        charge = "You typed '" + ele + "' which has a charge of 2-.\n";
    }
    else if((ele == "Db") || (ele == "db") || (ele == "Dubnium") || (ele == "dubnium") || (ele == "Sg") || (ele == "sg") || (ele == "Seaborgium") || ( ele == "seaborgium") || (ele == "Bh") || (ele == "bh") || (ele == "Bohrium") || (ele == "bohrium") || (ele == "Hs") || (ele == "hs") || (ele == "Hassium") || (ele == "hassium") || (ele == "Mt") || (ele == "mt") || (ele == "Meitnerium") || ( ele == "meitnerium") || (ele == "Ds") || (ele == "ds") || (ele == "Darmstadtium") || (ele == "darmstadtium") || (ele == "Rg") || (ele == "rg") || (ele == "Roentgenium") || ( ele == "roentgenium") || (ele == "Cn") || (ele == "cn") || (ele == "Copernicium") || (ele == "copernicium") || (ele == "Uut") || (ele == "uut") || (ele == "Ununtrium") || (ele == "ununtrium") || (ele == "Fl") || (ele == "fl") || (ele == "Flerovium") || ( ele == "flerovium") || (ele == "Uup") || (ele == "uup") || (ele == "Ununpentium") || (ele == "ununpentium") || (ele == "Lv") || (ele == "lv") || (ele == "Livermorium") || (ele == "livermorium") || (ele == "Uus") || (ele == "uus") || (ele == "Ununseptium") || ( ele == "ununseptium") || (ele == "Uuo") || (ele == "uuo") || (ele == "Ununoctium") || (ele == "Ununoctium")){
        cout << "This elements Ionic Charge is currently Unknown.\n";
        charge = "This elements Ionic Charge is currently Unknown.\n";
    }
    else if((ele == "V") || (ele == "v") || (ele == "Vanadium") || (ele == "vanadium") || (ele == "Re") || (ele == "re") || (ele == "Rhenium") || (ele == "rhenium")){
        cout << "This element can have multiple Ionic Charges. In this case: 5+, 4+, 3+\n";
        charge = "You typed '" + ele + "' which has a charge of either 5+, 4+, or 3+.\n";
    }
    else if((ele == "Mo") || (ele == "mo") || (ele == "Molybdenum") || (ele == "molybdenum") || (ele == "W") || (ele == "w") || (ele == "Tungsten") || (ele == "tungsten")){
        cout << "This element can have multiple Ionic Charges. In this case: 6+, 4+\n";
        charge = "You typed '" + ele + "' which has a charge of either 6+, or 4+.\n";
    }
    else if((ele == "Cr") || (ele == "cr") || (ele == "Chromium") || (ele == "chromium")){
        cout << "This element can have multiple Ionic Charges. In this case: 6+, 3+, 2+\n";
        charge = "You typed '" + ele + "' which has a charge of either 6+, 3+, or 2+.\n";
    }
    else if((ele == "Mn") || (ele == "mn") || (ele == "Manganese") || (ele == "manganese")){
        cout << "This element can have multiple Ionic Charges. In this case: 7+, 4+, 2+\n";
        charge = "You typed '" + ele + "' which has a charge of either 7+, 4+, or 2+.\n";
    }
    else if((ele == "Tc") || (ele == "tc") || (ele == "Technetium") || (ele == "technetium")){
        cout << "This element can have multiple Ionic Charges. In this case: 7+ or 4+\n";
        charge = "You typed '" + ele + "' which has a charge of either 7+ or 4+.\n";
    }
    else if((ele == "Fe") || (ele == "fe") || (ele == "Iron") || (ele == "iron") || (ele == "Co") || (ele == "co") || (ele == "Cobalt") || (ele == "cobalt")){
        cout << "This element can have multiple Ionic Charges. In this case: 3+, or 2+\n";
        charge = "You typed '" + ele + "' which has a charge of either 3+ or 2+.\n";
    }
    else if((ele == "Ru") || (ele == "ru") || (ele == "Ruthenium") || (ele == "ruthenium") || (ele == "Ir") || (ele == "ir") || (ele == "Iridium") || (ele == "iridium")){
        cout << "This element can have multiple Ionic Charges. In this case: 4+, 3+\n";
        charge = "You typed '" + ele + "' which has a charge of either 4+ or 3+.\n";
    }
    else if((ele == "Pd") || (ele == "pd") || (ele == "Palladium") || (ele == "palladium") || (ele == "Pt") || (ele == "pt") || (ele == "Platinum") || (ele == "platinum")){
        cout << "This element can have multiple Ionic Charges. In this case: 4+, 2+\n";
        charge = "You typed '" + ele + "' which has a charge of either 4+ or 2+.\n";
    }
    else if((ele == "Cu") || (ele == "cu") || (ele == "Copper") || (ele == "copper") || (ele == "Hg") || (ele == "hg") || (ele == "Mercury") || (ele == "mercury")){
        cout << "This element can have multiple Ionic Charges. In this case: 2+, 1+\n";
        charge = "You typed '" + ele + "' which has a charge of either 2+ or 1+.\n";
    }
    else{
        cout << "This is not a complete list. Just a list of the more commonly used ionic charges of elements. If you received this message, you either need to visit sciencenotes.org for more information or check your spelling on the element name or symbol you entered. Thanks.\n";
        charge = "You typed '" + ele + "' which was not included in this program. See sciencenotes.org for more information.";
        
        return;
    }
    
    outFile.open("Documents.txt");

    if(!outFile){
        cout << "Error, dude" << endl;
        return;
    }
    
    outFile << charge << "\n";
    outFile.close();
    
    return;
}

void findCharge(){
    cout << "Enter a value plus a sign (e.g. 2- or 5+): ";
    
    string val;
    cin >> val;
    
    if(val == "1+"){
        cout << "Hydrogen (H), Lithium (Li), Sodium (Na), Rubidium (Rb), Copper (Cu), Mercury (Hg), Cesium (Cs), Francium (Fr), Silver (Ag), all can have an ionic charge of 1+.\n";
    }
    else if(val == "2+"){
        cout << "Beryllium (Be), Magnesium (Mg), Manganese (Mn), Copper (Cu), Mercury (Hg), Palladium (Pd), Platinum (Pt), Chromium (Cr), Iron (Fe), Cobalt (Co), Calcium (Ca), Strontium (Sr), Barium (Ba), Radium (Ra), Nickel (Ni), Zinc (Zn), Cadmium (Cd), Lead (Pb), all can have an ionic charge of 2+.\n";
    }
    else if(val == "3+"){
        cout << "Scandium (Sc), Yttrium (Y), Chromium (Cr), Lanthanum (La), Ruthenium (Ru), Iridium (Ir), Actinium (Ac), Cerium (Ce), Gold (Au), Iron (Fe), Cobalt (Co), Boron (B), Aluminum (Al), Gallium (Ga), Indium (In), Antimony (Sb), Bismuth (Bi), Vanadium (V), and Rhenium (Re) all can have an ionic charge of 3+.\n";
    }
    else if(val == "4+"){
        cout << "Titanium (Ti), Zirconium (Zr), Hafnium (Hf), Palladium (Pd), Platinum (Pt), Manganese (Mn), Rutherfordium (Rf), Ruthenium (Ru), Iridium (Ir), Technetium (Tc), Thorium (Th), Osmium (Os), Silicon (Si), Germanium (Ge), Polonium (Po), Vanadium (V), Molybdenum (Mo), Tungsten (W), and Rhenium (Re) all can have an ionic charge of 4+.\n";
    }
    else if(val == "5+"){
        cout << "Niobium (Nb), Tantalum (Ta), Vanadium (V), and Rhenium (Re) all can have an ionic charge of 5+.\n";
    }
    else if(val == "0"){
        cout << "Helium (He), Neon (Ne), Argon (Ar), Krypton (Kr), Xenon (Xe), and Radon (Rn) all have an ionic charge of 0.\n";
    }
    else if(val == "1-"){
        cout << "Fluorine (F), Chlorine (Cl), and Astatine (At) all have an ionic charge of 1-.\n";
    }
    else if(val == "2-"){
        cout << "Oxygen (O) has an ionic charge of 2-.\n";
    }
    else if(val == "6+"){
        cout << "Molybdenum (Mo), Chromium (Cr), and Tungsten (W) can all have an ionic charge of 6+.\n";
    }
    else if(val == "7+"){
        cout << "Manganese (Mn) and Technetium (Tc) can both have an ionic charge of 7+.\n";
    }
    else{
        cout << "This is not a complete list. Just a list of the more commonly used ionic charges of elements. If you received this message, you either need to visit sciencenotes.org for more information or check your spelling on the element name or symbol you entered. Thanks.\n";
    }
    
    return;
}

void SIUnits(){
    //The compiler asked me to declare this variable outside of the do-while loop.
    int val = 999;
    
    do{
        int val = 999;
        cout << "Please select one of the following to view the unit in SI units:\n";
        
        int SIZE = 12;
        //I tried to use SIZE in the arrays here, but I received a compiler error. Not sure why.
        string units[12] = {"Hertz", "Newton", "Joule", "Watt", "Pascal", "Coulomb", "Volt", "Ohm", "Farad", "Henry", "Weber", "Tesla"};
        string SIValue[12] = {"s^-1", "kg * m * s^-2", "kg * m^2 * s^-2", "kg * m^2 * s^-3", "kg * m^-1 * s^-2", "A * s", "kg * m^2 * s^-3 * A^-1", "kg * m^2 * s^-3 * A^-2", "s^4 * A^2 * m^-2 * kg^-1", "kg * m^2 * s^-2 * A^-2", "kg * m^2 * s^-2 * A^-1", "kg * s^-2 * A^-1"};
        
        for(int i = 0; i < SIZE; i++){
            cout << i + 1;
            cout << " - ";
            cout << units[i];
            cout << "\n";
        }
        
        cout << "0 - QUIT\n";
        cin >> val;
        
        if(val != 0){
            cout << "\nSI units value is ";
            cout << SIValue[val - 1] << "\n\n";
        }
    }while(val != 0);
    
    return;
}

