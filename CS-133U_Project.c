/****************************************************************/
/*Author(s): Henry Sanders, Kenneth Sutter		        */
/*Date: 12/01/21					        */
/*Assignment: Group Project				        */
/*Description: This program is to be an interactive trivia game */
/* with a scorekeeping system, and user profiles.               */
/****************************************************************/





// Program directives
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>





// Function declarations
int menu_func();
int newg_func();
void rules_func();
void about_func();
int score_func();
int exit_func();
void default_func();
int cat_choice_func();




// Main program function
int main (void)
{
    char a;
    char b;
    char cat_func(char a, char b);
		
    menu_func();
};





// Main menu function
int menu_func()
{
// Initializing variables for main menu function
    int choice_1;

// Printing main menu
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tWelcome to Trivia Night!\n");
    printf("\t Fall Quarter Edition\n");
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tMain Menu Options:\n\n");
    printf("\t1. New Game\n");
    printf("\t2. Rules\n");
    printf("\t3. About\n");
    printf("\t4. Scoreboard\n");
    printf("\t5. Exit Game\n\n");
    printf("   Please select one option from the menu\n");
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");

// User input for main menu choice
    scanf("%d", &choice_1);

// Switch case for main menu
    switch(choice_1)  
    {  
        case 1 : 
    	{
	    system("clear");	    
	    newg_func();
	    break;    
	}
        case 2:
	{
            system("clear");
	    rules_func();
	    break;
	}
        case 3:
	{
	    system("clear");	    
	    about_func();
	    break;
	}     
        case 4:
	{
	    system("clear");
	    score_func();
	    break;
	} 
        case 5:
	{
            system("clear");
	    exit_func();
	    break; 
	} 
        default: 
        {
            system("clear");
	    default_func();
	    break;     
        }

    }  
    return(0);
}





// New game menu choice function
int newg_func()
{	
    cat_choice_func();
	
	
    return(0);
}






int cat_choice_func()
{
    int cat_choice;
	
    // Printing category menu
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tTo Begin Trivia Night!\n");
    printf("\tPlease choose a category\n");
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tCategory Menu Options:\n\n");
    printf("\t1. Sports\n");
    printf("\t2. Math\n");
    printf("\t3. Popular Culture\n");
    printf("\t4. Literature\n");
    printf("\t5. General Knowledge\n");
    printf("\t6. Science\n");
    printf("\t7. Geography\n");
    printf("\t8. History\n");
    printf("\t9. Music\n");
    printf("\t10. Film\n\n");
    printf("  Please select one option from the menu\n");
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    
    // User input for category menu choice
    scanf("%d", &cat_choice);
    
    // Switch case for main menu
    switch(cat_choice)  
    {  
        case 1 : 
        {
            system("clear");	    
            break;    
        }
        case 2:
        {
            system("clear");
            break;
        }
        case 3:
        {
            system("clear");	        
            break;
        }     
        case 4:
        {
            system("clear"); 
            break;
        } 
        case 5:
        {
            system("clear"); 
            break; 
        } 
        case 6:
        {
            system("clear");	    
            break; 
        }  
        case 7:
        {
            system("clear");	    
            break; 
        }
        case 8:
        {
            system("clear");	    
            break; 
        }
        case 9:
        {
            system("clear");	    
            break; 
        }
        case 10:
        {
            system("clear");	    
            break; 
        }
        default: 
        {
            system("clear");	
            printf("\nPlease select a valid option\n");
            cat_choice_func();
            break;     
        }

    }  

return(0);	
}



// Rules menu choice function
void rules_func()
{

// Initializing variables for rules function
    int rules_r;

// Printing rules
    printf("_______________________________________________\n");
    printf("_______________________________________________\n\n");
    printf("\t  Trivia Night Rules!\n");
    printf("_______________________________________________\n");
    printf("_______________________________________________\n\n");
    printf("\t1. This is a single player game.\n");
    printf("\t2. There are ten categories of questions.\n");
    printf("\t3. There will be five rounds.\n");
    printf("\t4. Each round choose a new category.\n");
    printf("\t5. Each round has ten random questions.\n");
    printf("\t6. You have 15 seconds to answer.\n");
    printf("\t7. Enter a,b,c, or d and press enter.\n");
    printf("\t8. Each correct answer is worth one point.\n");
    printf("\t9. Final round will be worth two points.\n");
    printf("\t10. After the game score will be displayed.\n");
    printf("\t11. Score will be saved to your user name.\n");
    printf("\t12. Enjoy Trivia Night!\n\n");
    printf("  Enter 1 to return to the main menu\n");
    printf("_______________________________________________\n");
    printf("_______________________________________________\n\n");

// User input to return to main menu
    scanf("%d", &rules_r);
    if (rules_r == 1)
    {
        system("clear");
        menu_func();
    }
    else
    {
        system("clear");	
        printf("\nPlease select a valid option\n");
        rules_func();
    }
    return;
}





// About menu choice function
void about_func()
{

// Initializing variables for about function
    int about_r;

// Printing about section
    printf("___________________________________________\n");
    printf("___________________________________________\n\n");
    printf("\t About Trivia Night!\n");
    printf("___________________________________________\n");
    printf("___________________________________________\n\n");
    printf("\t1. Version 1.0 of Trivia Night.\n");
    printf("\t2. Created by Henry Sanders.\n");
    printf("\t3. Created by Ken Sutter.\n");
    printf("\t4. Created for CS-133U Class.\n");
    printf("\t5. Created December 2 2021.\n");
    printf("\t6. Created in the C language.\n");
    printf("\t7. Thanks for using our program!\n\n");
    printf("  Enter 1 to return to the main menu\n");
    printf("___________________________________________\n");
    printf("___________________________________________\n\n");

// User input to return to main menu
    scanf("%d", &about_r);
    if (about_r == 1)
    {
        system("clear");
        menu_func();
    }
    else
    {
        system("clear");	
        printf("\nPlease select a valid option\n");
        about_func();
    }
	
    return;
}






// Scoreboard menu choice fucntion(unsure about func type currently)
int score_func()
{
    return(0);
}






// Exit menu choice function
int exit_func()
{
    system("clear");
    printf("\nYou chose to exit the game.");
    printf("\n\nSee you next time!");
    exit(0);
    return(0);
}






// Default menu choice function
void default_func()
{
    system("clear");
    printf("\n   You did not choose a valid menu option!\n");
    printf("\tPlease choose a valid menu option!\n");
    menu_func();
    return;
}






// Categories
char sports_func()
{

// Sports Category
    char sport_arr[15][200] = 
    {
/*q1*/	"In which sport might you come across an Albatross?",
/*q2*/	"Which sport takes place in a circle 4.55m in diameter?",
/*q3*/	"Which football team has won the european cup the most times?",
/*q4*/	"In which sport is the Cy Young Trophy awarded?",
/*q5*/	"How many balls are on a pool table at the start of a game?",
/*q6*/	"Who has won the most men's singles tennis titles?",
/*q7*/	"How many lanes does an olympic standard swimming pool have?",
/*q8*/	"Which NFL team's defensive unit was nicknamed 'The Purple People Eaters'?",
/*q9*/	"In what sport is the Heisman trophy awarded?",
/*q10*/	"In miles, how long is a marathon?",
/*q11*/	"How is the chess term 'shah mat' better known?",
/*q12*/	"In which sport do competitors sweep the ice and throw stones at houses?",
/*q13*/	"What distance is covered in one circuit of a modern outdoor running track (in meters)?",
/*q14*/	"In which sport is the Canadian, Wayne Gretzky, an all time great?",
/*q15*/	"What trophy is awarded to the winner of the NHL playoffs?"
    };

    char sport_ans_arr[15][200] = 
    {
/*a1*/  "Golf\n" 
	"Baseball\n"
	"Cricket\n"
	"American Football\n",
/*a2*/  "Basketball\n"
	"Sumo Wrestling\n"
	"Baseball\n"
	"Hockey\n",
/*a3*/  "AC Milan\n"
	"Liverpool\n"
	"Real Madrid\n"
	"Barcelona\n",
/*a4*/  "American Football\n"
	"Hockey\n"
	"Track and Field\n"
	"Baseball\n",
/*a5*/  "16\n"
	"10\n"
	"9\n"
	"12\n",
/*a6*/  "Roger Federer\n"
	"Pete Sampras\n"
	"Andre Agassi\n"
	"Rafael Nadal\n",
/*a7*/  "12\n"
	"10\n"
	"8\n"
	"6\n",
/*a8*/  "Oakland Raiders\n"
	"Chicago Bears\n"
	"New England Patriots\n"
	"The Minnesota Vikings\n",
/*a9*/  "American football\n"
	"Baseball\n"
	"Hockey\n"
	"Tennis\n",
/*a10*/ "28\n"
	"26\n"
	"24\n"
	"22\n",
/*a11*/ "Resign\n"
	"Check\n"
	"Checkmate\n"
	"Castle\n",
/*a12*/ "Hockey\n"
	"Figure Skating\n"
	"Speed Skating\n"
	"Curling\n",
/*a13*/ "400 Meters\n"
	"800 Meters\n"
	"1000 Meters\n"
	"1200 Meters\n",
/*a14*/ "Tennis\n"
	"Ice Hockey\n"
	"American Football\n"
	"Baseball\n",
/*a15*/ "Commissioner's Trophy\n"
	"Heisman Trophy\n"
	"Stanley cup Trophy\n"
	"Vince Lombardi Trophy\n"
    };
}


char math_func()
{

// Math Category
    char math_arr[15][200] = 
    {
/*q1*/	"What is the only even prime number?",
/*q2*/	"What is the smallest perfect number?",
/*q3*/	"What is the only number that does not have its Roman numeral?",
/*q4*/	"When counting what comes after a trillion?",
/*q5*/	"How many digits does the value of Pi have?",
/*q6*/	"How many sides does an “enneadecagon” have?",
/*q7*/	"What geometric form does not have any vertices?",
/*q8*/	"What is the square root of a quarter?",
/*q9*/	"What is the name of the longest side of a right-angled triangle?",
/*q10*/	"What does three squared equal?",
/*q11*/	"What’s the top number of a fraction called?",
/*q12*/	"What’s the bottom number of a fraction called?",
/*q13*/	"What number does giga stand for?",
/*q14*/	"What is a straight line that touches a circle at a single point?",
/*q15*/	"How many equal sides does an icosahedron have?"
    };

    char math_ans_arr[15][200] = 
    {
/*a1*/  "Two\n" 
	"Four\n"
	"Six\n"
	"Eight\n",
/*a2*/  "One\n"
	"Six\n"
	"Eight\n"
	"Five\n",
/*a3*/  "One\n"
	"One Million\n"
	"Zero\n"
	"Ten\n",
/*a4*/  "Billion\n"
	"Zillion\n"
	"Quintillion\n"
	"Quadrillion\n",
/*a5*/  "Infinite\n"
	"One Million\n"
	"Unknown\n"
	"Zero\n",
/*a6*/  "20\n"
	"19\n"
	"25\n"
	"30\n",
/*a7*/  "Square\n"
	"Triangle\n"
	"Circle\n"
	"Cube\n",
/*a8*/  "One Eighth\n"
	"One Sixteenth\n"
	"One Quarter\n"
	"One Half\n",
/*a9*/  "Hypotenuse\n"
	"Vertex\n"
	"Leg\n"
	"Base\n",
/*a10*/ "33\n"
	"9\n"
	"6\n"
	"1\n",
/*a11*/ "Denominator\n"
	"Nominator\n"
	"Numerator\n"
	"Decimal\n",
/*a12*/ "Decimal\n"
	"Nominator\n"
	"Numerator\n"
	"Denominator\n",
/*a13*/ "One Million\n"
	"One Billion\n"
	"One Trillion\n"
	"One Thousand\n",
/*a14*/ "Sine\n"
	"Cosine\n"
	"Tangent\n"
	"Fractal\n",
/*a15*/ "10\n"
	"15\n"
	"16\n"
	"20\n"
    };
}



char pop_func()
{

// Pop Culture Category
    char pop_cult_arr[15][200] = 
    {
/*q1*/	"Who was originally cast as the voice of Shrek before Mike Meyers?",
/*q2*/	"What is the name of the family dog on Full House?",
/*q3*/	"How many Harry Potter films have been made?",
/*q4*/	"How many languages can C-3PO speak in Star Wars?",
/*q5*/	"What is the name of the 2020 Netflix documentary that featured Joe Exotic and Carole Baskin?",
/*q6*/	"What is the longest-running game show on network television?",
/*q7*/	"What rapper-turned-actor stars on Law and Order: Special Victims Unit?",
/*q8*/	"What was the first released movie that takes place in the Marvel Cinematic Universe?",
/*q9*/	"How many Spice Girls were there?",
/*q10*/	"What is the one best selling album of all time?",
/*q11*/	"What is the UK’s deep base style rap hip hop called?",
/*q12*/	"What is the Korean hip hop that took the world by storm in 2010?",
/*q13*/	"What name is the Academy Awards best known by?",
/*q14*/	"When was the Mickey Mouse character first invented?",
/*q15*/	"When was the first Grammy Awards held?"
    };

	
	
	
    char pop_cult_ans_arr[15][200] = 
    {
/*a1*/  "Chris Farley\n"
	"Chris Rock\n"
	"Dave Chappelle\n"
	"Larry The Cable Guy\n",
/*a2*/  "Skip\n"
	"Comet\n"
	"Sally\n"
	"Lassie\n",
/*a3*/  "4\n"
	"3\n"
	"8\n"
	"9\n",
/*a4*/  "Ten Thousand\n"
	"Five Million\n"
	"One Million\n"
	"Six Million\n",
/*a5*/  "Tiger King\n"
	"American Sniper\n"
	"Spiderman\n"
	"The Avengers\n",
/*a6*/  "Jeopardy\n"
	"Price Is Right\n"
	"Wheel Of Fortune\n"
	"Who Wants To Be A Millionaire\n",
/*a7*/  "Ice Cube\n"
	"Snoop Dogg\n"
	"Ice T\n"
	"50 Cent\n",
/*a8*/  "Spiderman\n"
	"Superman\n"
	"Batman\n"
	"Iron Man\n",
/*a9*/  "5\n"
	"4\n"
	"3\n"
	"2\n",
/*a10*/ "Yellow Submarine\n"
	"Thriller\n"
	"Back in Black\n"
	"Hotel California\n",
/*a11*/ "Trap\n"
	"Gangster\n"
	"Grime\n"
	"Industrial\n",
/*a12*/ "Pop\n"
	"Hip Pop\n"
	"New Pop\n"
	"K Pop\n",
/*a13*/ "Oscars\n"
	"Globes\n"
	"Politzer\n"
	"Grammy\n",
/*a14*/ "1900\n"
	"1928\n"
	"1942\n"
	"1950\n",
/*a15*/ "1929\n"
	"1939\n"
	"1949\n"
	"1959\n"
    };
}



char lit_func()
{

// Literature Category
    char lit_arr[15][200] = 
    {
/*q1*/	"Who was the author of 'Lord of The Rings'?",
/*q2*/	"Who was the author of 'Game Of Thrones'?",
/*q3*/	"Who was the author of the sci-fi series 'The Expanse'?",
/*q4*/	"Where did Frodo take the ring in 'Lord of The Rings'?",
/*q5*/	"In what language was Don Quixote written?",
/*q6*/	"In 'A Christmas Carol', how many ghosts visit Scrooge?",
/*q7*/	"In what year was 'Of Mice and Men' published?",
/*q8*/	"What novel is set on a desert planet inhabited by giant sandworms?",
/*q9*/	"How many of Ernest Hemingway’s ten novels were published posthumously?",
/*q10*/	"In 'Do Androids Dream of Electric Sheep', many humans leave Earth for which planet?",
/*q11*/	"In which year did Charles Dickens die?",
/*q12*/	"What type of animal is Bagheera in Rudyard Kipling’s The Jungle Book?",
/*q13*/	"How many books are in 'The Girl With The Dragon Tattoo' series written by Stieg Larsson?",
/*q14*/	"In George Orwell’s 'Animal Farm', what type of animal is Boxer?",
/*q15*/	"What is used as the portal to Narnia in C. S. Lewis’ children’s fantasy series?"
    };

    char lit_ans_arr[15][200] = 
    {
/*a1*/  "George Lucus\n"
	"J. K. Rowling\n"
	"J. R. R. Tolkien\n"
	"George R. R. Martin\n",
/*a2*/  "George Lucus\n"
	"J. K. Rowling\n"
	"J. R. R. Tolkien\n"
	"George R. R. Martin\n",
/*a3*/  "Issac Asimov\n"
	"Mark Twain\n"
	"George Orwell\n"
	"James S. A. Corey\n",
/*a4*/  "Mordor\n"
	"Gondor\n"
	"Helm’s Deep\n"
	"The Shire\n",
/*a5*/  "English\n"
	"Russian\n"
	"Spanish\n"
	"Japanese\n",
/*a6*/  "3\n"
	"4\n"
	"5\n"
	"6\n",
/*a7*/  "1927\n"
	"1947\n"
	"1937\n"
	"1928\n",
/*a8*/  "Star Wars\n"
	"Dust\n"
	"Sandstorm\n"
	"Dune\n",
/*a9*/  "3\n"
	"4\n"
	"5\n"
	"6\n",
/*a10*/ "Jupiter\n"
	"Saturn\n"
	"Mars\n"
	"Pluto\n",
/*a11*/ "1850\n"
	"1860\n"
	"1870\n"
	"1880\n",
/*a12*/ "Tiger\n"
	"Panther\n"
	"Lion\n"
	"Bear\n",
/*a13*/ "3\n"
	"4\n"
	"5\n"
	"6\n",
/*a14*/ "Dog\n"
	"Cat\n"
	"Cow\n"
	"Horse\n",
/*a15*/ "Desk\n"
	"Wardrobe\n"
	"Couch\n"
	"Fridge\n"
    };
}



char gen_func()
{
// General Knowledge Category
    char gen_know_arr[15][200] = 
    {
/*q1*/	"Burning to stop the flow of blood is?",
/*q2*/	"What is raku?",
/*q3*/	"Of which fruit is 'pearmain' a variety?",
/*q4*/	"What is the most common blood-type group?",
/*q5*/	"What is a group of trout referred to as?",
/*q6*/	"How many 'Air Force One'(s) are there?",
/*q7*/	"What is measured with an ombrometer?",
/*q8*/	"What is the tenth letter of the Greek alphabet?",
/*q9*/	"Which country is the largest in Africa?",
/*q10*/	"What is the process of splitting atoms called?",
/*q11*/	"Of what mineral is limestone composed of?",
/*q12*/	"What country launched its first space rocket in January, 1961?",
/*q13*/	"What is the most common metallic ore in the Earth's crust?",
/*q14*/	"What color is Mary Poppins' umbrella?",
/*q15*/	"What is the leaf of a fern called?"
    };

    char gen_know_ans_arr[15][200] = 
    {
/*a1*/  "Cauterize\n"
	"Third Degree\n"
	"Superficial\n"
	"First Degree\n",
/*a2*/  "Japanese Sport\n"
	"Japanese Pottery\n"
	"Japanese Art\n"
	"Japanese Painting\n",
/*a3*/  "Plum\n"
	"Orange\n"
	"Apple\n"
	"Cherry\n",
/*a4*/  "Type C\n"
	"Type B\n"
	"Type A\n"
	"Type O\n",
/*a5*/  "Hover\n"
	"Pad\n"
	"Pool\n"
	"Gang\n",
/*a6*/  "1\n"
	"2\n"
	"3\n"
	"4\n",
/*a7*/  "Evaporation\n"
	"Pressure\n"
	"Rainfall\n"
	"Voltage\n",
/*a8*/  "Nu\n"
	"Mu\n"
	"Gamma\n"
	"Kappa\n",
/*a9*/  "Sudan\n"
	"Algeria\n"
	"DR Congo\n"
	"Libya\n",
/*a10*/ "Fusing\n"
	"Fission\n"
	"Fusion\n"
	"Fissure\n",
/*a11*/ "Garnet\n"
	"Graphite\n"
	"Calcite\n"
	"Quartz\n",
/*a12*/ "China\n"
	"France\n"
	"Russia\n"
	"Italy\n",
/*a13*/ "Aluminum\n"
	"Copper\n"
	"Gold\n"
	"Silver\n",
/*a14*/ "Black\n"
	"Pink\n"
	"White\n"
	"Red\n",
/*a15*/ "Pad\n"
	"Frond\n"
	"Leaf\n"
	"Berry\n"
    };
}



char sci_func()
{

// Science Category
    char sci_arr[15][200] = 
    {
/*q1*/	"What is the nearest planet to the sun?",
/*q2*/	"What is the boiling point of water in Celsius?",
/*q3*/	"How many elements are there in the periodic table?",
/*q4*/	"Who invented the telephone?",
/*q5*/	"How many bones are in the human body?",
/*q6*/	"The penny consists primarily of which type of metal?",
/*q7*/	"Which quality of water allows objects to float on top of it?",
/*q8*/	"What measurement is most commonly used to determine the depth of water?",
/*q9*/	"What is the hardest known natural material?",
/*q10*/	"What is the brightest and hottest planet in our solar system?",
/*q11*/	"Which planet has the most moons?",
/*q12*/	"The oldest living tree in the world can be found where?",
/*q13*/	"Which animal was the first to be launched into space?",
/*q14*/	"What is a geiger counter used to measure?",
/*q15*/	"Which of Newton’s Laws states that ‘for every action, there is an equal and opposite reaction?"
    };

    char sci_ans_arr[15][200] = 
    {
/*a1*/  "Earth"
	"Mars"
	"Mercury"
	"Saturn",
/*a2*/  "0 degrees"
	"50 degrees"
	"100 degrees"
	"150 degrees",
/*a3*/  "86"
	"102"
	"106"
	"118",
/*a4*/  "Alexander Graham Bell"
	"Benjamin Franklin"
	"Sir Isaac Newton"
	"Charles Darwin",
/*a5*/  "203"
	"204"
	"205"
	"206",
/*a6*/  "Copper"
	"Aluminum"
	"Zinc"
	"Nickel",
/*a7*/  "Viscosity"
	"Buoyancy"
	"Temperature"
	"Acidity",
/*a8*/  "Meter"
	"Liter"
	"Gram"
	"Fathom",
/*a9*/  "Uranium"
	"Titanium"
	"Diamond"
	"Tungsten",
/*a10*/ "Venus"
	"Mars"
	"Mercury"
	"Uranus",
/*a11*/ "Neptune"
	"Saturn"
	"Earth"
	"Jupiter",
/*a12*/ "Tibet"
	"New Zealand"
	"Oregon"
	"California",
/*a13*/ "Dog"
	"Cat"
	"Mouse"
	"Rabbit",
/*a14*/ "Mass"
	"Volume"
	"Radiation"
	"Decay",
/*a15*/ "The first law of motion"
	"The second law of motion"
	"The third law of motion"
	"The fourth law of motion"
    };
}



char geo_func()
{

// Geography Category
    char geo_arr[15][200] = 
    {
/*q1*/	"What is the longest river in the world?",
/*q2*/	"What is the capital of Canada?",
/*q3*/	"How many time zones does Russia have?",
/*q4*/	"How many US states share a border with Canada?",
/*q5*/	"What is the only country that borders the United Kingdom?",
/*q6*/	"Which African nation has the most pyramids?",
/*q7*/	"What is the only continent with land in all four hemispheres?",
/*q8*/	"Which country in the European Union has the largest population?",
/*q9*/	"How many time zones does China have?",
/*q10*/	"Denali is the highest mountain in which continent?",
/*q11*/	"Seychelles is an island nation located in which ocean?",
/*q12*/	"What is the capital of Chile?",
/*q13*/	"What are the two main branches of geography?",
/*q14*/	"Which of these cities is NOT in England?",
/*q15*/	"What river runs through Baghdad?"
    };

    char geo_ans_arr[15][200] = 
    {
/*a1*/  "Nile"
	"Amazon"
	"Yangtze"
	"Yellow",
/*a2*/  "Montreal"
	"Vancouver"
	"Ottawa"
	"Victoria",
/*a3*/  "4"
	"7"
	"11"
	"13",
/*a4*/  "13"
	"14"
	"9"
	"15",
/*a5*/  "Denmark"
	"Ireland"
	"Scotland"
	"Finland",
/*a6*/  "Egypt"
	"Libya"
	"Ethiopia"
	"Sudan",
/*a7*/  "Africa"
	"Europe"
	"Asia"
	"North America",
/*a8*/  "Sweden"
	"Austria"
	"Germany"
	"Czech Republic",
/*a9*/  "1"
	"3"
	"5"
	"7",
/*a10*/ "South America"
	"North America"
	"Australia"
	"Europe",
/*a11*/ "Pacific"
	"Atlantic"
	"Indian"
	"Arctic",
/*a12*/ "Iquique"
	"Puerto Montt"
	"Valparaiso"
	"Santiago",
/*a13*/ "Environmental and Human"
	"Human and Physical"
	"Physical and Environmental"
	"Environmental and Cartographic",
/*a14*/ "Derry"
	"Fakenham"
	"Bath"
	"Derby",
/*a15*/ "Karun"
	"Jordan"
	"Tigris"
	"Euphrates"
    };
}



char hist_func()
{

// History Category
    char hist_arr[15][200] = 
    {
/*q1*/	"How many years did the 100 years war last?",
/*q2*/	"In which year was John F. Kennedy assassinated?",
/*q3*/	"Which Greek historian is known as the 'Father of History'?",
/*q4*/	"The ancient city of Rome was built on how many hills?",
/*q5*/	"The Peloponnesian War was fought between Athens and which other ancient Greek state?",
/*q6*/	"What is the name of the first known human civilization?",
/*q7*/	"Which English King was best known for beheading his wives?",
/*q8*/	"Which war took place between 1950 and 1953?",
/*q9*/	"How did Joan of Arc die?",
/*q10*/	"Construction of the Berlin Wall began in what year?",
/*q11*/	"The Incan Empire is located in which modern-day country?",
/*q12*/	"Who painted the mural 'The Last Supper'?",
/*q13*/	"Which U.S. President was inducted into the National Wrestling Hall of Fame in 1992?",
/*q14*/	"Where was Adolf Hitler born?",
/*q15*/	"When was Pearl Harbor bombed?"
    };

    char hist_ans_arr[15][200] = 
    {
/*a1*/  "96 years"
	"100 years"
	"116 years"
	"122 years",
/*a2*/  "1961"
	"1963"
	"1965"
	"1968",
/*a3*/  "Thucydides"
	"Aristotle"
	"Dionysius"
	"Herodotus",
/*a4*/  "3"
	"5"
	"7"
	"9",
/*a5*/  "Corinth"
	"Sparta"
	"Rhodes"
	"Syracuse",
/*a6*/  "Mesopotamia"
	"Babylon"
	"Persepolis"
	"Carthage",
/*a7*/  "Henry IV"
	"Henry VI"
	"Henry VII"
	"Henry VIII",
/*a8*/  "The Korean War"
	"The Vietnam War"
	"WWII"
	"The Iraq War",
/*a9*/  "The Guillotine"
	"Crucifixion"
	"Burned at the stake"
	"Torture",
/*a10*/ "1953"
	"1961"
	"1967"
	"1970",
/*a11*/ "Brazil"
	"Chile"
	"Argentina"
	"Peru",
/*a12*/ "Michelangelo"
	"Raphael"
	"Leonardo da Vinci"
	"Caravaggio",
/*a13*/ "Theodore Roosevelt"
	"Thomas Jefferson"
	"Abraham Lincoln"
	"Jimmy Carter",
/*a14*/ "Austria"
	"Germany"
	"Sweden"
	"Switzerland",
/*a15*/ "December 3rd, 1940"
	"December 7th, 1941"
	"December 11th, 1942"
	"December 13th, 1943"
    };
}




char music_func()
{

// Music Category
    char music_arr[15][200] = 
    {
/*q1*/	"Rock band AC/DC originates from which country?",
/*q2*/	"What was Elvis Presley’s first hit in 1956?",
/*q3*/	"What decade is the hit single “Love Shack” by the B-52s from?",
/*q4*/	"What is Kendrick Lamar’s most famous album according to the greatest album chart?",
/*q5*/	"What is late American rapper Mac Miller’s actual name?",
/*q6*/	"Which Pink Floyd album was the inspiration for the band’s famous psychological drama film released in 1982?",
/*q7*/	"Which of these instruments originated from Australia?",
/*q8*/	"Which Beatle had dyslexia?",
/*q9*/	"What was the name of the Spice Girls debut album released in 1996?",
/*q10*/	"How did American singer/songwriter Otis Redding die?",
/*q11*/	"What does the Italian word ‘piano’ translate to in musical terms?",
/*q12*/	"Who was the lead guitarist of Queen?",
/*q13*/	"What US festival hosted over 350,000 music fans in 1969?",
/*q14*/	"Who is the lead singer of famous heavy metal band, Metallica?",
/*q15*/	"What artist released the song “Video Games” in 2012?"
    };

    char music_ans_arr[15][200] = 
    {
/*a1*/  "England"
	"Scotland"
	"USA"
	"Australia",
/*a2*/  "Jailhouse Rock"
	"Blue Suede Shoes"
	"Heartbreak Hotel"
	"Hound Dog",
/*a3*/  "Sixties"
	"Seventies"
	"Eighties"
	"Nineties",
/*a4*/  "Good Kid, m.A.A.d city"
	"To Pimp a Butterfly"
	"Untitled Unmastered"
	"Section.80",
/*a5*/  "Malcolm James McCormick"
	"McGregor John Miller"
	"Macauley Jacob Murphy"
	"Michael Joseph Martin",
/*a6*/  "Dark Side of the Moon"
	"Animals"
	"Wish You Were Here"
	"The Wall",
/*a7*/  "Didgeridoo"
	"Tambol"
	"Bangkakaw"
	"Tibod",
/*a8*/  "George Harrison"
	"Ringo Starr"
	"John Lennon"
	"Paul McCartney",
/*a9*/  "Spiceworld"
	"Spice"
	"One Hour of Girl Power"
	"Forever",
/*a10*/ "Heart attack"
	"Vehicle accident"
	"Plane accident"
	"Pancreatic cancer",
/*a11*/ "Softly"
	"Loudly"
	"Lively"
	"Slowly",
/*a12*/ "Freddie Mercury"
	"Brian May"
	"John Deacon"
	"Roger Taylor",
/*a13*/ "Glastonbury"
	"Summer Jam"
	"Woodstock"
	"Heatwave",
/*a14*/ "Kirk Hammett"
	"Cliff Burton"
	"Lars Ulrich"
	"James Hetfield",
/*a15*/ "Carly Rae Jepsen"
	"Kelly Clarkson"
	"Lana Del Ray"
	"Taylor Swift"
    };
}



char film_func()
{

// Film Category
    char film_arr[15][200] = 
    {
/*q1*/	"Who is regarded as 'The Queen of Sci-Fi'?",
/*q2*/	"What was the first feature-length animated movie ever released?",
/*q3*/	"What flavor of Pop Tarts does Buddy the Elf use in his spaghetti in Elf?",
/*q4*/	"What is the name of the skyscraper in Die Hard?",
/*q5*/	"Who played park owner John Hammond in Jurassic Park?",
/*q6*/	"Who is the only actor to receive an Oscar nomination for acting in a Lord of the Rings movie?",
/*q7*/	"What 1994 crime film revitalized John Travolta’s career?",
/*q8*/	"How many movies has Samuel L. Jackson starred in?",
/*q9*/	"Which Alfred Hitchcock film starred James Stewart and was shot to look like one continuous take?",
/*q10*/	"Which movie was incorrectly announced as the winner of Best Picture at the 2017 Academy Awards?",
/*q11*/	"In Apocalypse Now, Robert Duvall says, 'I love the smell of ____ in the morning.'",
/*q12*/	"What is the model of revolver made famous by Clint Eastwood’s “Dirty” Harry Callahan?",
/*q13*/	"What is the highest-grossing foreign-language film to date?",
/*q14*/	"In what year were three of Jim Carrey’s blockbuster hits released?",
/*q15*/	"What was the first movie to ever be rated PG-13?"
     };

     char film_ans_arr[15][200] = 
     {
/*a1*/  "Sigourney Weaver"
	"Carrie Fisher"
	"Linda Hamilton"
	"Gillian Anderson",
/*a2*/  "Steamboat Willie"
	"Alice in Wonderland"
	"Snow White and the Seven Dwarves"
	"Gulliver’s Travels",
/*a3*/  "Strawberry"
	"Chocolate"
	"Smores"
	"Cherry",
/*a4*/  "Empire State Building"
	"Union Bank Plaza"
	"The Ritz"
	"Nakatomi Plaza",
/*a5*/  "Samuel L. Jackson"
	"Jeff Goldblum"
	"Richard Attenborough"
	"Alan Grant",
/*a6*/  "Elijah Wood"
	"Sean Bean"
	"Sean Astin"
	"Ian McKellen",
/*a7*/  "Pulp Fiction"
	"Natural Born Killers"
	"Leon"
	"Shawshank Redemption",
/*a8*/  "At least 84"
	"At least 138"
	"At least 164"
	"At least 208",
/*a9*/  "Psycho"
	"Rope"
	"Topaz"
	"Sabotage",
/*a10*/ "La La Land"
	"Moonlight"
	"Arrival"
	"Hacksaw Ridge",
/*a11*/ "Gunpowder"
	"Napalm"
	"Biscuits"
	"Rain",
/*a12*/ "Colt Diamondback .38 Special"
	"Colt King Cobra .357 Magnum"
	"Smith & Wesson Model 19 .357 Magnum"
	"Smith & Wesson Model 29 .44 Magnum",
/*a13*/ "Hero"
	"Parasite"
	"Crouching Tiger, Hidden Dragon"
	"Pan’s Labyrinth",
/*a14*/ "1990"
	"1992"
	"1994"
	"1996",
/*a15*/ "Red Dawn"
	"Ghostbusters"
	"Dune"
	"2010"
    };
}

}
