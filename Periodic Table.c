//Joy Majumdar (2020-1-80-009)
//Rohit Bhowmick(2020-1-80-006)
//Kazi Mashrur Rahman(2020-1-80-057)

#include<stdio.h>
#include<string.h>
void stringcount(char *s) //s value enter into input
{
    int i;
    for(i=0;s[i]!=0;i++) //loop is used to find value and run the process.
    {
        if((s[i]>=64&&s[i]<=91)||(s[i]>=96&&s[i]<=124)) //Ascii number only character will be found.
        {
            if(strcmp(s,"H") == 0) /*strcmp is a function which will compare with the two string.
                                   Here the strcmp is used to compare with input and given code if it finds any match the result is 0 and print the value otherwise it show error.*/

            {
                printf("Name:Hydrogen\nAtomic number:1\nAtomic mass:1.008");
            }
            else if(strcmp(s,"He") == 0)
            {
                printf("Name:Helium\nAtomic number:2\nAtomic mass:4.003");
            }
            else if(strcmp(s,"Li") == 0)
            {
                printf("Name:Lithium\nAtomic number:3\nAtomic mass:6.941");
            }
            else if(strcmp(s,"Be") == 0)
            {
                printf("Name:Beryllium\nAtomic number:4\nAtomic mass:9.012");
            }
            else if(strcmp(s,"B") == 0)
            {
                printf("Name:Boron\nAtomic number:5\nAtomic mass:10.811");
            }
            else if(strcmp(s,"C") == 0)
            {
                printf("Name:Carbon\nAtomic number:6\nAtomic mass:12.011");
            }
            else if(strcmp(s,"N") == 0)
            {
                printf("Name:Nitrogen\nAtomic number:7\nAtomic mass:14.007");
            }
            else if(strcmp(s,"O") == 0)
            {
                printf("Name:Oxygen\nAtomic number:8\nAtomic mass:15.999");
            }
            else if(strcmp(s,"F") == 0)
            {
                printf("Name:Fluorine\nAtomic number:9\nAtomic mass:18.998");
            }
            else if(strcmp(s,"Ne") == 0)
            {
                printf("Name:Neon\nAtomic number:10\nAtomic mass:20.180");
            }
            else if(strcmp(s,"Na") == 0)
            {
                printf("Name:Sodium\nAtomic number:11\nAtomic mass:22.990");
            }
            else if(strcmp(s,"Mg") == 0)
            {
                printf("Name:Magnesium\nAtomic number:12\nAtomic mass:24.305");
            }
            else if(strcmp(s,"Al") == 0)
            {
                printf("Name:Aluminium\nAtomic number:13\nAtomic mass:26.928");
            }
            else if(strcmp(s,"Si") == 0)
            {
                printf("Name:Silicon\nAtomic number:14\nAtomic mass:28.086");
            }
            else if(strcmp(s,"P") == 0)
            {
                printf("Name:Phosphorus\nAtomic number:15\nAtomic mass:30.974");
            }
            else if(strcmp(s,"S") == 0)
            {
                printf("Name:Sulfur\nAtomic number:16\nAtomic mass:32.066");
            }
            else if(strcmp(s,"Cl") == 0)
            {
                printf("Name:Chlorine\nAtomic number:17\nAtomic mass:35.453");
            }
            else if(strcmp(s,"Ar") == 0)
            {
                printf("Name:Argon\nAtomic number:18\nAtomic mass:39.948");
            }
            else if(strcmp(s,"K") == 0)
            {
                printf("Name:Potassium\nAtomic number:19\nAtomic mass:39.098");
            }
            else if(strcmp(s,"Ca") == 0)
            {
                printf("Name:Calcium\nAtomic number:20\nAtomic mass:40.078");
            }
            else if(strcmp(s,"Sc") == 0)
            {
                printf("Name:Scandium\nAtomic number:21\nAtomic mass:44.956");
            }
            else if(strcmp(s,"Ti") == 0)
            {
                printf("Name:Titanium\nAtomic number:22\nAtomic mass:47.867");
            }
            else if(strcmp(s,"V") == 0)
            {
                printf("Name:Vanadium\nAtomic number:23\nAtomic mass:50.942");
            }
            else if(strcmp(s,"Cr") == 0)
            {
                printf("Name:Chromium\nAtomic number:24\nAtomic mass:51.996");
            }
            else if(strcmp(s,"Mn") == 0)
            {
                printf("Name:Manganese\nAtomic number:25\nAtomic mass:54.938");
            }
            else if(strcmp(s,"Fe") == 0)
            {
                printf("Name:Iron\nAtomic number:26\nAtomic mass:55.845");
            }
            else if(strcmp(s,"Co") == 0)
            {
                printf("Name:Cobalt\nAtomic number:27\nAtomic mass:58.933");
            }
            else if(strcmp(s,"Ni") == 0)
            {
                printf("Name:Nickel\nAtomic number:28\nAtomic mass:58.693");
            }
            else if(strcmp(s,"Cu") == 0)
            {
                printf("Name:Copper\nAtomic number:29\nAtomic mass:63.546");
            }
            else if(strcmp(s,"Zn") == 0)
            {
                printf("Name:Zinc\nAtomic number:30\nAtomic mass:65.38");
            }
            else if(strcmp(s,"Ga") == 0)
            {
                printf("Name:Gallium\nAtomic number:31\nAtomic mass:69.723");
            }
            else if(strcmp(s,"Ge") == 0)
            {
                printf("Name:Germanium\nAtomic number:32\nAtomic mass:72.631");
            }
            else if(strcmp(s,"As") == 0)
            {
                printf("Name:Arsenic\nAtomic number:33\nAtomic mass:74.922");
            }
            else if(strcmp(s,"Se") == 0)
            {
                printf("Name:Selenium\nAtomic number:34\nAtomic mass:78.971");
            }
            else if(strcmp(s,"Br") == 0)
            {
                printf("Name:Bromine\nAtomic number:35\nAtomic mass:79.904");
            }
            else if(strcmp(s,"Kr") == 0)
            {
                printf("Name:Krypton\nAtomic number:36\nAtomic mass:83.798");
            }
            else if(strcmp(s,"Rb") == 0)
            {
                printf("Name:Rubidium\nAtomic number:37\nAtomic mass:85.468");
            }
            else if(strcmp(s,"Sr") == 0)
            {
                printf("Name:Strontium\nAtomic number:38\nAtomic mass:87.62");
            }
            else if(strcmp(s,"Y") == 0)
            {
                printf("Name:Yttrium\nAtomic number:39\nAtomic mass:88.906");
            }
            else if(strcmp(s,"Zr") == 0)
            {
                printf("Name:Zirconium\nAtomic number:40\nAtomic mass:91.224");
            }
            else if(strcmp(s,"Nb") == 0)
            {
                printf("Name:Niobium\nAtomic number:41\nAtomic mass:92.906");
            }
            else if(strcmp(s,"Mo") == 0)
            {
                printf("Name:Molybdenum\nAtomic number:42\nAtomic mass:95.95");
            }
            else if(strcmp(s,"Tc") == 0)
            {
                printf("Name:Technetium\nAtomic number:43\nAtomic mass:98.907");
            }
            else if(strcmp(s,"Ru") == 0)
            {
                printf("Name:Ruthenium\nAtomic number:44\nAtomic mass:101.07");
            }
            else if(strcmp(s,"Rh") == 0)
            {
                printf("Name:Rhodium\nAtomic number:45\nAtomic mass:102.906");
            }
            else if(strcmp(s,"Pd") == 0)
            {
                printf("Name:Palladium\nAtomic Number:46\nAtomic mass:106.4");
            }
            else if(strcmp(s,"Ag") == 0)
            {
                printf("Name:Sliver\nAtomic Number:47\nAtomic mass:107.868");
            }
             else if(strcmp(s,"Cd") == 0)
            {
                printf("Name:Cadmium\nAtomic Number:48\nAtomic mass:112.414");
            }
            else if(strcmp(s,"In") == 0)
            {
                printf("Name:Indium\nAtomic Number:49\nAtomic mass:114.818");
            }
           else if(strcmp(s,"Sn") == 0)
            {
                printf("Name:Tin\nAtomic Number:50\nAtomic mass:118.711");
            }
           else if(strcmp(s,"Sb") == 0)
            {
                printf("Name:Antimony\nAtomic Number:51\nAtomic mass:121.760");
            }
            else if(strcmp(s,"Te") == 0)
            {
                printf("Name:Tellurium\nAtomic Number:52\nAtomic mass:127.6");
            }
            else if(strcmp(s,"I") == 0)
            {
                printf("Name:Iodine\nAtomic Number:53\nAtomic mass:126.904");
            }
            else if(strcmp(s,"Xe") == 0)
            {
                printf("Name:Xenon\nAtomic Number:54\nAtomic mass:131.293");
            }
            else if(strcmp(s,"Cs") == 0)
            {
                printf("Name:Cesium\nAtomic Number:55\nAtomic mass:132.905");
            }
            else if(strcmp(s,"Ba") == 0)
            {
                printf("Name:Barium\nAtomic Number:56\nAtomic mass:137.328");
            }
            else if(strcmp(s,"La") == 0)
            {
                printf("Name:Lanthanum\nAtomic Number:57\nAtomic mass:138.905");
            }
            else if(strcmp(s,"Ce") == 0)
            {
                printf("Name:Cerium\nAtomic Number:58\nAtomic mass:140.116");
            }
            else if(strcmp(s,"Pr") == 0)
            {
                printf("Name:Praseodymium\nAtomic Number:59\nAtomic mass:140.908");
            }
             else if(strcmp(s,"Nd") == 0)
            {
                printf("Name:Neodymium\nAtomic Number:60\nAtomic mass:144.243");
            }
            else if(strcmp(s,"Pm") == 0)
            {
                printf("Name:Promethium\nAtomic Number:61\nAtomic mass:144.913");
            }
            else if(strcmp(s,"Sm") == 0)
            {
                printf("Name:Samarium\nAtomic Number:62\nAtomic mass:150.36");
            }
            else if(strcmp(s,"Eu") == 0)
            {
                printf("Name:Europium\nAtomic Number:63\nAtomic mass:150.364");
            }
            else if(strcmp(s,"Gd") == 0)
            {
                printf("Name:Gadolinium\nAtomic Number:64\nAtomic mass:157.25");
            }
            else if(strcmp(s,"Tb") == 0)
            {
                printf("Name:Terbium\nAtomic Number:65\nAtomic mass:158.925");
            }
            else if(strcmp(s,"Dy") == 0)
            {
                printf("Name:Dysprosium\nAtomic Number:66\nAtomic mass:162.500");
            }
            else if(strcmp(s,"Ho") == 0)
            {
                printf("Name:Holmium\nAtomic Number:67\nAtomic mass:164.930");
            }
            else if(strcmp(s,"Er") == 0)
            {
                printf("Name:Erbium\nAtomic Number:68\nAtomic mass:167.259");
            }
            else if(strcmp(s,"Tm") == 0)
            {
                printf("Name:Thulium\nAtomic Number:69\nAtomic mass:168.934");
            }
            else if(strcmp(s,"Yb") == 0)
            {
                printf("Name:Ytterbium\nAtomic Number:70\nAtomic mass:173.055");
            }
            else if(strcmp(s,"Lu") == 0)
            {
                printf("Name:Lutetium\nAtomic Number:71\nAtomic mass:174.967");
            }
            else if(strcmp(s,"Hf") == 0)
            {
                printf("Name:Hafnium\nAtomic Number:72\nAtomic mass:178.49");
            }
            else if(strcmp(s,"Ta") == 0)
            {
                printf("Name:Tantalum\nAtomic Number:73\nAtomic mass:180.948");
            }
            else if(strcmp(s,"W") == 0)
            {
                printf("Name:Tungsten\nAtomic Number:74\nAtomic mass:183.84");
            }
            else if(strcmp(s,"Re") == 0)
            {
                printf("Name:Rhenium\nAtomic Number:75\nAtomic mass:190.207");
            }
            else if(strcmp(s,"Os") == 0)
            {
                printf("Name:Osmium\nAtomic Number:76\nAtomic mass:190.23");
            }
            else if(strcmp(s,"Ir") == 0)
            {
                printf("Name:Iridium\nAtomic Number:77\nAtomic mass:192.217");
            }
            else if(strcmp(s,"Pt") == 0)
            {
                printf("Name:Platinum\nAtomic Number:78\nAtomic mass:195.085");
            }
            else if(strcmp(s,"Au") ==0 )
            {
                printf("Name:Gold\nAtomic Number:79\nAtomic mass:196.967");
            }
            else if(strcmp(s,"Hg") == 0)
            {
                printf("Name:Mercury\nAtomic Number:80\nAtomic mass:200.592");
            }
            else if(strcmp(s,"Tl") == 0)
            {
                printf("Name:Thallium\nAtomic Number:81\nAtomic mass:204.383");
            }
            else if(strcmp(s,"Pb") == 0)
            {
                printf("Name:Lead\nAtomic Number:82\nAtomic mass:207.2");
            }
            else if(strcmp(s,"Bi") == 0)
            {
                printf("Name:Bismuth\nAtomic Number:83\nAtomic mass:208.980");
            }
            else if(strcmp(s,"Po") == 0)
            {
                printf("Name:Polonium\nAtomic Number:84\nAtomic mass:208.982");
            }
            else if(strcmp(s,"At") == 0)
            {
                printf("Name:Astatine\nAtomic Number:85\nAtomic mass:209.987");
            }
            else if(strcmp(s,"Rn") == 0)
            {
                printf("Name:Radon\nAtomic Number:86\nAtomic mass:222.018");
            }
            else if(strcmp(s,"Fr") == 0)
            {
                printf("Name:Francium\nAtomic Number:87\nAtomic mass:223.020");
            }
            else if(strcmp(s,"Ra") == 0)
            {
                printf("Name:Radium\nAtomic Number:88\nAtomic mass:226.025");
            }
            else if(strcmp(s,"Ac") == 0)
            {
                printf("Name:Actinium\nAtomic Number:89\nAtomic mass:227.028");
            }
            else if(strcmp(s,"Th") == 0)
            {
                printf("Name:Thorium\nAtomic Number:90\nAtomic mass:232.038");
            }
            else if(strcmp(s,"Pa") == 0)
            {
                printf("Name:Protactinium\nAtomic Number:91\nAtomic mass:231.036");
            }
            else if(strcmp(s,"U") == 0)
            {
                printf("Name:Uranium\nAtomic Number:92\nAtomic mass:238.029");
            }
            else if (strcmp(s,"Np") == 0)
            {
                printf("Name:Neptunium\nAtomic Number:93\nAtomic mass:237.048");
            }
            else if(strcmp(s,"Pu") == 0)
            {
                printf("Name:Plutonium\nAtomic Number:94\nAtomic mass:244.064");
            }
            else if(strcmp(s,"Am") == 0)
            {
                printf("Name:Americium\nAtomic Number:95\nAtomic mass:243.061");
            }
            else if(strcmp(s,"Cm") == 0)
            {
                printf("Name:Curium\nAtomic Number:96\nAtomic mass:247.070");
            }
            else if(strcmp(s,"Bk") == 0)
            {
                printf("Name:Berkelium\nAtomic Number:97\nAtomic mass:247.070");
            }
            else if(strcmp(s,"Cf") == 0)
            {
                printf("Name:Californium\nAtomic Number:98\nAtomic mass:251.080");
            }
            else if(strcmp(s,"Es") == 0)
            {
                printf("Name:Einstenium\nAtomic Number:99\nAtomic mass:254");
            }
            else if(strcmp(s,"Fm") == 0)
            {
                printf("Name:Fermium\nAtomic Number:100\nAtomic mass:257.095");
            }
            else if(strcmp(s,"Md") == 0)
            {
                printf("Name:Mendelevium\nAtomic Number:101\nAtomic mass:258.1");
            }
            else if(strcmp(s,"No") == 0)
            {
                printf("Name:Nobelium\nAtomic Number:102\nAtomic mass:259.101");
            }
            else if(strcmp(s,"Lr") == 0)
            {
                printf("Name:Lawrencium\nAtomic Number:103\nAtomic mass:262");
            }
            else if(strcmp(s,"Rf") == 0)
            {
                printf("Name:Rutherfordium\nAtomic Number:104\nAtomic mass:261");
            }
            else if(strcmp(s,"Db") == 0)
            {
                printf("Name:Dubnium\nAtomic Number:105\nAtomic mass:262");
            }
            else if(strcmp(s,"Sg") == 0)
            {
                printf("Name:Seaborgium\nAtomic Number:106\nAtomic mass:266");
            }
            else if(strcmp(s,"Bh") == 0)
            {
                printf("Name:Bohrium\nAtomic Number:107\nAtomic mass:264");
            }
            else if(strcmp(s,"Hs") == 0)
            {
                printf("Name:Hassium\nAtomic Number:108\nAtomic mass:269");
            }
            else if(strcmp(s,"Mt") == 0)
            {
                printf("Name:Meitnerium\nAtomic Number:109\nAtomic mass:278");
            }
            else if(strcmp(s,"Ds") == 0)
            {
                printf("Name:Darmstadtium\nAtomic Number:110\nAtomic mass:281");
            }
            else if(strcmp(s,"Rg") == 0)
            {
                printf("Name:Roentgenium\nAtomic Number:111\nAtomic mass:280");
            }
            else if(strcmp(s,"Cn") == 0)
            {
                printf("Name:Copernicium\nAtomic Number:112\nAtomic mass:285");
            }
            else if(strcmp(s,"Nh") == 0)
            {
                printf("Name:Nihonium\nAtomic Number:113\nAtomic mass:286");
            }
            else if(strcmp(s,"Fl") == 0)
            {
                printf("Name:Flerovium\nAtomic Number:114\nAtomic mass:289");
            }
            else if(strcmp(s,"Mc") == 0)
            {
                printf("Name:Moscovium\nAtomic Number:115\nAtomic mass:289");
            }
            else if(strcmp(s,"Lv") == 0)
            {
                printf("Name:Livermorium\nAtomic Number:116\nAtomic mass:293");
            }
            else if(strcmp(s,"Ts") == 0)
            {
                printf("Name:Tennessine\nAtomic Number:117\nAtomic mass:294");
            }
            else if(strcmp(s,"Og") == 0)
            {
                printf("Name:Oganesson\nAtomic Number:118\nAtomic mass:294");
            }
            else
            {
                printf("Error");
            }
        }
             else
                printf("Error");
        return ;
    }
}
int main()
{
    char s[1000];
    printf("Enter Chemical symbol:");
    gets(s); //take character value as a input
    stringcount(s); //find stringcount go to user define function with value
    return 0;
}
