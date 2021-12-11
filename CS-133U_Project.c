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
#include <string.h>
#include <unistd.h>

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
    menu_func();
    return(0);
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

// Scoreboard menu choice fucntion
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


// New game menu choice function
int newg_func(int t_score)
{	   
    int score = cat_choice_func(t_score);
    int incorrect = 25 - score;
    int percent = (score / 25) * 100;
    int choice;	

    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tGame Over! Your Score is Below\n");
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tYour total score is: %d.\n", score);
    printf("\tYou answered %d correct.\n", score);
    printf("\tYou answered %d incorrect.\n", incorrect);
    printf("\tYou answerd %d correct.\n", percent);// needs fixed
    printf("\tGood Game!\n\n");
    printf("\t1. Save your score and return to the main menu.\n");
    printf("\t2. Return to the main menu.\n");
    printf("\t3. Exit the program.\n");
    printf("\tPlease select an option above!.\n");
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    scanf("%d", &end_choice)
    
    switch(end_choice)  
    {  
        case 1: 
    	{
	    system("clear");	    
	    //open file save score to file
	    menu_func();
	    break;    
	}
        case 2:
	{
            system("clear");
	    menu_func();
	    break;
	}
        case 3:
	{
	    system("clear");	    
	    exit_func();
	    break;
        }
        default: 
        {
            system("clear");
	    // repet func
	    break;     
        }
}

int cat_choice_func()
{
    int cat_choice;
    int counter;
    int r_num, l_limit = 0, u_limit = 14;
    int i = 0, t_score = 0;
    char answer;

// Categories

// Sports Category
    char sport_arr[15][200] = 
    {
/*q1*/	"\tIn which sport might you come across an Albatross?",
/*q2*/	"\tWhich sport takes place in a circle \n\t4.55m in diameter?",
/*q3*/	"\tWhich football team has won the european cup \n\tthe most times?",
/*q4*/	"\tIn which sport is the Cy Young Trophy awarded?",
/*q5*/	"\tHow many balls are on a pool table at \n\tthe start of a game?",
/*q6*/	"\tWho has won the most men's singles tennis titles?",
/*q7*/	"\tHow many lanes does an olympic standard \n\tswimming pool have?",
/*q8*/	"\tWhich NFL team's defensive unit was nicknamed \n\t'The Purple People Eaters'?",
/*q9*/	"\tIn what sport is the Heisman trophy awarded?",
/*q10*/	"\tIn miles, how long is a marathon?",
/*q11*/	"\tHow is the chess term 'shah mat' better known?",
/*q12*/	"\tIn which sport do competitors sweep the ice \n\tand throw stones at houses?",
/*q13*/	"\tWhat distance is covered in one circuit of \n\ta modern outdoor running track (in meters)?",
/*q14*/	"\tIn which sport is the Canadian, Wayne Gretzky, \n\tan all time great?",
/*q15*/	"\tWhat trophy is awarded to the winner of \n\tthe NHL playoffs?"
    };

    char sport_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Golf\n" 
	"\tb. Baseball\n"
	"\tc. Cricket\n"
	"\td. American Football\n",
/*a2*/  "\ta. Basketball\n"
	"\tb. Sumo Wrestling\n"
	"\tc. Baseball\n"
	"\td. Hockey\n",
/*a3*/  "\ta. AC Milan\n"
	"\tb. Liverpool\n"
	"\tc. Real Madrid\n"
	"\td. Barcelona\n",
/*a4*/  "\ta. American Football\n"
	"\tb. Hockey\n"
	"\tc. Track and Field\n"
	"\td. Baseball\n",
/*a5*/  "\ta. 16\n"
	"\tb. 10\n"
	"\tc. 9\n"
	"\td. 12\n",
/*a6*/  "\ta. Roger Federer\n"
	"\tb. Pete Sampras\n"
	"\tc. Andre Agassi\n"
	"\td. Rafael Nadal\n",
/*a7*/  "\ta. 12\n"
	"\tb. 10\n"
	"\tc. 8\n"
	"\td. 6\n",
/*a8*/  "\ta. Oakland Raiders\n"
	"\tb. Chicago Bears\n"
	"\tc. New England Patriots\n"
	"\td. Minnesota Vikings\n",
/*a9*/  "\ta. American Football\n"
	"\tb. Baseball\n"
	"\tc. Hockey\n"
	"\td. Tennis\n",
/*a10*/ "\ta. 28\n"
	"\tb. 26\n"
	"\tc. 24\n"
	"\td. 22\n",
/*a11*/ "\ta. Resign\n"
	"\tb. Check\n"
	"\tc. Checkmate\n"
	"\td. Castle\n",
/*a12*/ "\ta. Hockey\n"
	"\tb. Figure Skating\n"
	"\tc. Speed Skating\n"
	"\td. Curling\n",
/*a13*/ "\ta. 400 Meters\n"
	"\tb. 800 Meters\n"
	"\tc. 1000 Meters\n"
	"\td. 1200 Meters\n",
/*a14*/ "\ta. Tennis\n"
	"\tb. Ice Hockey\n"
	"\tc. American Football\n"
	"\td. Baseball\n",
/*a15*/ "\ta. Commissioner's Trophy\n"
	"\tb. Heisman Trophy\n"
	"\tc. Stanley cup Trophy\n"
	"\td. Vince Lombardi Trophy\n"
    };


// Math Category
    char math_arr[15][200] = 
    {
/*q1*/	"\tWhat is the only even prime number?",
/*q2*/	"\tWhat is the smallest perfect number?",
/*q3*/	"\tWhat is the only number that does not have \n\tits Roman numeral?",
/*q4*/	"\tWhen counting what comes after a trillion?",
/*q5*/	"\tHow many digits does the value of Pi have?",
/*q6*/	"\tHow many sides does an “enneadecagon” have?",
/*q7*/	"\tWhat geometric form does not have any vertices?",
/*q8*/	"\tWhat is the square root of a quarter?",
/*q9*/	"\tWhat is the name of the longest side of \n\ta right-angled triangle?",
/*q10*/	"\tWhat does three squared equal?",
/*q11*/	"\tWhat’s the top number of a fraction called?",
/*q12*/	"\tWhat’s the bottom number of a fraction called?",
/*q13*/	"\tWhat number does giga stand for?",
/*q14*/	"\tWhat is a straight line that touches \n\ta circle at a single point?",
/*q15*/	"\tHow many equal sides does an icosahedron have?"
    };

    char math_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Two\n" 
	"\tb. Four\n"
	"\tc. Six\n"
	"\td. Eight\n",
/*a2*/  "\ta. One\n"
	"\tb. Six\n"
	"\tc. Eight\n"
	"\td. Five\n",
/*a3*/  "\ta. One\n"
	"\tb. One Million\n"
	"\tc. Zero\n"
	"\td. Ten\n",
/*a4*/  "\ta. Billion\n"
	"\tb. Zillion\n"
	"\tc. Quintillion\n"
	"\td. Quadrillion\n",
/*a5*/  "\ta. Infinite\n"
	"\tb. One Million\n"
	"\tc. Unknown\n"
	"\td. Zero\n",
/*a6*/  "\ta. 20\n"
	"\tb. 19\n"
	"\tc. 25\n"
	"\td. 30\n",
/*a7*/  "\ta. Square\n"
	"\tb. Triangle\n"
	"\tc. Circle\n"
	"\td. Cube\n",
/*a8*/  "\ta. One Eighth\n"
	"\tb. One Sixteenth\n"
	"\tc. One Quarter\n"
	"\td. One Half\n",
/*a9*/  "\ta. Hypotenuse\n"
	"\tb. Vertex\n"
	"\tc. Leg\n"
	"\td. Base\n",
/*a10*/ "\ta. 33\n"
	"\tb. 9\n"
	"\tc. 6\n"
	"\td. 1\n",
/*a11*/ "\ta. Denominator\n"
	"\tb. Nominator\n"
	"\tc. Numerator\n"
	"\td. Decimal\n",
/*a12*/ "\ta. Decimal\n"
	"\tb. Nominator\n"
	"\tc. Numerator\n"
	"\td. Denominator\n",
/*a13*/ "\ta. One Billion\n"
	"\tb. One Million\n"
	"\tc. One Trillion\n"
	"\td. One Thousand\n",
/*a14*/ "\ta. Sine\n"
	"\tb. Tangent\n"
	"\tc. Cosine\n"
	"\td. Fractal\n",
/*a15*/ "\ta. 10\n"
	"\tb. 15\n"
	"\tc. 20\n"
	"\td. 16\n"
    };


// Pop Culture Category
    char pop_cult_arr[15][200] = 
    {
/*q1*/	"\tWho was originally cast as the voice of \n\tShrek before Mike Meyers?",
/*q2*/	"\tWhat is the name of the family dog on Full House?",
/*q3*/	"\tHow many Harry Potter films have been made?",
/*q4*/	"\tHow many languages can C-3PO speak in Star Wars?",
/*q5*/	"\tWhat is the name of the 2020 Netflix documentary \n\tthat featured Joe Exotic and Carole Baskin?",
/*q6*/	"\tWhat is the longest-running game show on \n\tnetwork television?",
/*q7*/	"\tWhat rapper-turned-actor stars on Law and Order: \n\tSpecial Victims Unit?",
/*q8*/	"\tWhat was the first released movie that takes place in \n\tthe Marvel Cinematic Universe?",
/*q9*/	"\tHow many Spice Girls were there?",
/*q10*/	"\tWhat is the one best selling album of all time?",
/*q11*/	"\tWhat is the UK’s deep base style rap hip hop called?",
/*q12*/	"\tWhat is the Korean hip hop that took the world \n\tby storm in 2010?",
/*q13*/	"\tWhat name is the Academy Awards best known by?",
/*q14*/	"\tWhen was the Mickey Mouse character first invented?",
/*q15*/	"\tWhen was the first Grammy Awards held?"
    };
	
    char pop_cult_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Chris Farley\n"
	"\tb. Chris Rock\n"
	"\tc. Dave Chappelle\n"
	"\td. Larry The Cable Guy\n",
/*a2*/  "\ta. Skip\n"
	"\tb. Comet\n"
	"\tc. Sally\n"
	"\td. Lassie\n",
/*a3*/  "\ta. 4\n"
	"\tb. 3\n"
	"\tc. 8\n"
	"\td. 9\n",
/*a4*/  "\ta. Ten Thousand\n"
	"\tb. Five Million\n"
	"\tc. One Million\n"
	"\td. Six Million\n",
/*a5*/  "\ta. Tiger King\n"
	"\tb. American Sniper\n"
	"\tc. Spiderman\n"
	"\td. The Avengers\n",
/*a6*/  "\ta. Jeopardy\n"
	"\tb. Price Is Right\n"
	"\tc. Wheel Of Fortune\n"
	"\td. Who Wants To Be A Millionaire\n",
/*a7*/  "\ta. Ice Cube\n"
	"\tb. Snoop Dogg\n"
	"\tc. Ice T\n"
	"\td. 50 Cent\n",
/*a8*/  "\ta. Spiderman\n"
	"\tb. Superman\n"
	"\tc. Batman\n"
	"\td. Iron Man\n",
/*a9*/  "\ta. 5\n"
	"\tb. 4\n"
	"\tc. 3\n"
	"\td. 2\n",
/*a10*/ "\ta. Yellow Submarine\n"
	"\tb. Thriller\n"
	"\tc. Back in Black\n"
	"\td. Hotel California\n",
/*a11*/ "\ta. Trap\n"
	"\tb. Gangster\n"
	"\tc. Grime\n"
	"\td. Industrial\n",
/*a12*/ "\ta. Pop\n"
	"\tb. Hip Pop\n"
	"\tc. New Pop\n"
	"\td. K Pop\n",
/*a13*/ "\ta. Oscars\n"
	"\tb. Globes\n"
	"\tc. Politzer\n"
	"\td. Grammy\n",
/*a14*/ "\ta. 1900\n"
	"\tb. 1928\n"
	"\tc. 1942\n"
	"\td. 1950\n",
/*a15*/ "\ta. 1929\n"
	"\tb. 1939\n"
	"\tc. 1959\n"
	"\td. 1949\n"
    };


// Literature Category
    char lit_arr[15][200] = 
    {
/*q1*/	"\tWho was the author of 'Lord of The Rings'?",
/*q2*/	"\tWho was the author of 'Game Of Thrones'?",
/*q3*/	"\tWho was the author of the sci-fi series 'The Expanse'?",
/*q4*/	"\tWhere did Frodo take the ring in 'Lord of The Rings'?",
/*q5*/	"\tIn what language was Don Quixote written?",
/*q6*/	"\tIn 'A Christmas Carol', how many ghosts visit Scrooge?",
/*q7*/	"\tIn what year was 'Of Mice and Men' published?",
/*q8*/	"\tWhat novel is set on a desert planet inhabited by \n\tgiant sandworms?",
/*q9*/	"\tHow many of Ernest Hemingway’s ten novels were \n\tpublished posthumously?",
/*q10*/	"\tIn 'Do Androids Dream of Electric Sheep', many \n\thumans leave Earth for which planet?",
/*q11*/	"\tIn which year did Charles Dickens die?",
/*q12*/	"\tWhat type of animal is Bagheera in Rudyard Kipling’s \n\tThe Jungle Book?",
/*q13*/	"\tHow many books are in 'The Girl With The Dragon Tattoo' \n\tseries written by Stieg Larsson?",
/*q14*/	"\tIn George Orwell’s 'Animal Farm', what type of \n\tanimal is Boxer?",
/*q15*/	"\tWhat is used as the portal to Narnia in C. S. Lewis’ \n\tchildren’s fantasy series?"
    };

    char lit_ans_arr[15][200] = 
    {
/*a1*/  "\ta. J. R. R. Tolkien\n"
	"\tb. J. K. Rowling\n"
	"\tc. George Lucus\n"
	"\td. George R. R. Martin\n",
/*a2*/  "\ta. George Lucus\n"
	"\tb. George R. R. Martin\n"
	"\tc. J. R. R. Tolkien\n"
	"\td. J. K. Rowling\n",
/*a3*/  "\ta. Issac Asimov\n"
	"\tb. Mark Twain\n"
	"\tc. James S. A. Corey\n"
	"\td. George Orwell\n",
/*a4*/  "\ta. The Shire\n"
	"\tb. Gondor\n"
	"\tc. Helm’s Deep\n"
	"\td. Mordor\n",
/*a5*/  "\ta. Spanish\n"
	"\tb. Russian\n"
	"\tc. English\n"
	"\td. Japanese\n",
/*a6*/  "\ta. 3\n"
	"\tb. 4\n"
	"\tc. 5\n"
	"\td. 6\n",
/*a7*/  "\ta. 1927\n"
	"\tb. 1947\n"
	"\tc. 1937\n"
	"\td. 1928\n",
/*a8*/  "\ta. Star Wars\n"
	"\tb. Dust\n"
	"\tc. Sandstorm\n"
	"\td. Dune\n",
/*a9*/  "\ta. 3\n"
	"\tb. 4\n"
	"\tc. 5\n"
	"\td. 6\n",
/*a10*/ "\ta. Jupiter\n"
	"\tb. Mars\n"
	"\tc. Saturn\n"
	"\td. Pluto\n",
/*a11*/ "\ta. 1850\n"
	"\tb. 1860\n"
	"\tc. 1870\n"
	"\td. 1880\n",
/*a12*/ "\ta. Tiger\n"
	"\tb. Bear\n"
	"\tc. Lion\n"
	"\td. Panther\n",
/*a13*/ "\ta. 3\n"
	"\tb. 4\n"
	"\tc. 5\n"
	"\td. 6\n",
/*a14*/ "\ta. Dog\n"
	"\tb. Horse\n"
	"\tc. Cow\n"
	"\td. Cat\n",
/*a15*/ "\ta. Desk\n"
	"\tb. Couch\n"
	"\tc. Wardrobe\n"
	"\td. Fridge\n"
    };


// General Knowledge Category
    char gen_know_arr[15][200] = 
    {
/*q1*/	"\tBurning to stop the flow of blood is?",
/*q2*/	"\tWhat is raku?",
/*q3*/	"\tOf which fruit is 'pearmain' a variety?",
/*q4*/	"\tWhat is the most common blood-type group?",
/*q5*/	"\tWhat is a group of trout referred to as?",
/*q6*/	"\tHow many 'Air Force One'(s) are there?",
/*q7*/	"\tWhat is measured with an ombrometer?",
/*q8*/	"\tWhat is the tenth letter of the Greek alphabet?",
/*q9*/	"\tWhich country is the largest in Africa?",
/*q10*/	"\tWhat is the process of splitting atoms called?",
/*q11*/	"\tOf what mineral is limestone composed of?",
/*q12*/	"\tWhat country launched its first space rocket in \n\tJanuary, 1961?",
/*q13*/	"\tWhat is the most common metallic ore in the Earth's crust?",
/*q14*/	"\tWhat color is Mary Poppins' umbrella?",
/*q15*/	"\tWhat is the leaf of a fern called?"
    };

    char gen_know_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Cauterize\n"
	"\tb. Third Degree\n"
	"\tc. Superficial\n"
	"\td. First Degree\n",
/*a2*/  "\ta. Japanese Sport\n"
	"\tb. Japanese Pottery\n"
	"\tc. Japanese Art\n"
	"\td. Japanese Painting\n",
/*a3*/  "\ta. Plum\n"
	"\tb. Orange\n"
	"\tc. Apple\n"
	"\td. Cherry\n",
/*a4*/  "\ta. Type C\n"
	"\tb. Type B\n"
	"\tc. Type A\n"
	"\td. Type O\n",
/*a5*/  "\ta. Hover\n"
	"\tb. Pad\n"
	"\tc. Pool\n"
	"\td. Gang\n",
/*a6*/  "\ta. 1\n"
	"\tb. 2\n"
	"\tc. 3\n"
	"\td. 4\n",
/*a7*/  "\ta. Evaporation\n"
	"\tb. Pressure\n"
	"\tc. Rainfall\n"
	"\td. Voltage\n",
/*a8*/  "\ta. Nu\n"
	"\tb. Mu\n"
	"\tc. Gamma\n"
	"\td. Kappa\n",
/*a9*/  "\ta. Algeria\n"
	"\tb. Sudan\n"
	"\tc. D.R. Congo\n"
	"\td. Libya\n",
/*a10*/ "\ta. Fusing\n"
	"\tb. Fission\n"
	"\tc. Fusion\n"
	"\td. Fissure\n",
/*a11*/ "\ta. Garnet\n"
	"\tb. Graphite\n"
	"\tc. Calcite\n"
	"\td. Quartz\n",
/*a12*/ "\ta. China\n"
	"\tb. France\n"
	"\tc. Russia\n"
	"\td. Italy\n",
/*a13*/ "\ta. Aluminum\n"
	"\tb. Copper\n"
	"\tc. Gold\n"
	"\td. Silver\n",
/*a14*/ "\ta. Black\n"
	"\tb. Pink\n"
	"\tc. White\n"
	"\td. Red\n",
/*a15*/ "\ta. Pad\n"
	"\tb. Leaf\n"
	"\tc. Frond\n"
	"\td. Berry\n"
    };


// Science Category
    char sci_arr[15][200] = 
    {
/*q1*/	"\tWhat is the nearest planet to the sun?",
/*q2*/	"\tWhat is the boiling point of water in Celsius?",
/*q3*/	"\tHow many elements are there in the periodic table?",
/*q4*/	"\tWho invented the telephone?",
/*q5*/	"\tHow many bones are in the human body?",
/*q6*/	"\tThe penny consists primarily of which type of metal?",
/*q7*/	"\tWhich quality of water allows objects to float \n\ton top of it?",
/*q8*/	"\tWhat measurement is most commonly used to determine \n\tthe depth of water?",
/*q9*/	"\tWhat is the hardest known natural material?",
/*q10*/	"\tWhat is the brightest and hottest planet in \n\tour solar system?",
/*q11*/	"\tWhich planet has the most moons?",
/*q12*/	"\tThe oldest living tree in the world can be found where?",
/*q13*/	"\tWhich animal was the first to be launched into space?",
/*q14*/	"\tWhat is a geiger counter used to measure?",
/*q15*/	"\tWhich of Newton’s Laws states that ‘for every action, \n\tthere is an equal and opposite reaction?"
    };

    char sci_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Mercury\n"
	"\tb. Mars\n"
	"\tc. Earth\n"
	"\td. Saturn\n",
/*a2*/  "\ta. 0 degrees\n"
	"\tb. 100 degrees\n"
	"\tc. 50 degrees\n"
	"\td. 150 degrees\n",
/*a3*/  "\ta. 86\n"
	"\tb. 102\n"
	"\tc. 118\n"
	"\td. 106\n",
/*a4*/  "\ta. Charles Darwin\n"
	"\tb. Benjamin Franklin\n"
	"\tc. Sir Isaac Newton\n"
	"\td. Alexander Graham Bell\n",
/*a5*/  "\ta. 206\n"
	"\tb. 204\n"
	"\tc. 205\n"
	"\td. 203\n",
/*a6*/  "\ta. Copper\n"
	"\tb. Zinc\n"
	"\tc. Aluminumc\n"
	"\td. Nickel\n",
/*a7*/  "\ta. Viscosity\n"
	"\tb. Temperature\n"
	"\tc. Buoyancy\n"
	"\td. Acidity\n",
/*a8*/  "\ta. Meter\n"
	"\tb. Liter\n"
	"\tc. Gram\n"
	"\td. Fathom\n",
/*a9*/  "\ta. Diamond\n"
	"\tb. Titanium\n"
	"\tc. Uranium\n"
	"\td. Tungsten\n",
/*a10*/ "\ta. Mars\n"
	"\tb. Venus\n"
	"\tc. Mercury\n"
	"\td. Uranus\n",
/*a11*/ "\ta. Neptune\n"
	"\tb. Earth\n"
	"\tc. Saturn\n"
	"\td. Jupiter\n",
/*a12*/ "\ta. Tibet\n"
	"\tb. New Zealand\n"
	"\tc. California\n"
	"\td. Oregon\n",
/*a13*/ "\ta. Dog\n"
	"\tb. Cat\n"
	"\tc. Mouse\n"
	"\td. Rabbit\n",
/*a14*/ "\ta. Mass\n"
	"\tb. Radiation\n"
	"\tc. Volume\n"
	"\td. Decay\n",
/*a15*/ "\ta. The first law of motion\n"
	"\tb. The second law of motion\n"
	"\tc. The third law of motion\n"
	"\td. The fourth law of motion\n"
    };


// Geography Category
    char geo_arr[15][200] = 
    {
/*q1*/	"\tWhat is the longest river in the world?",
/*q2*/	"\tWhat is the capital of Canada?",
/*q3*/	"\tHow many time zones does Russia have?",
/*q4*/	"\tHow many US states share a border with Canada?",
/*q5*/	"\tWhat is the only country that borders the United Kingdom?",
/*q6*/	"\tWhich African nation has the most pyramids?",
/*q7*/	"\tWhat is the only continent with land in \n\tall four hemispheres?",
/*q8*/	"\tWhich country in the European Union has the \n\tlargest population?",
/*q9*/	"\tHow many time zones does China have?",
/*q10*/	"\tDenali is the highest mountain in which continent?",
/*q11*/	"\tSeychelles is an island nation located in which ocean?",
/*q12*/	"\tWhat is the capital of Chile?",
/*q13*/	"\tWhat are the two main branches of geography?",
/*q14*/	"\tWhich of these cities is NOT in England?",
/*q15*/	"\tWhat river runs through Baghdad?"
    };

    char geo_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Nile\n"
	"\tb. Amazon\n"
	"\tc. Yangtze\n"
	"\td. Yellow\n",
/*a2*/  "\ta. Montreal\n"
	"\tb. Ottawa\n"
	"\tc. Vancouver\n"
	"\td. Victoria\n",
/*a3*/  "\ta. 4\n"
	"\tb. 7\n"
	"\tc. 11\n"
	"\td. 13\n",
/*a4*/  "\ta. 15\n"
	"\tb. 14\n"
	"\tc. 9\n"
	"\td. 13\n",
/*a5*/  "\ta. Ireland\n"
	"\tb. Denmark\n"
	"\tc. Scotland\n"
	"\td. Finland\n",
/*a6*/  "\ta. Egypt\n"
	"\tb. Sudan\n"
	"\tc. Ethiopia\n"
	"\td. Libya\n",
/*a7*/  "\ta. Asia\n"
	"\tb. Europe\n"
	"\tc. Africa\n"
	"\td. North America\n",
/*a8*/  "\ta. Sweden\n"
	"\tb. Austria\n"
	"\tc. Czech Republic\n"
	"\td. Germany\n",
/*a9*/  "\ta. 1\n"
	"\tb. 3\n"
	"\tc. 5\n"
	"\td. 7\n",
/*a10*/ "\ta. South America\n"
	"\tb. North America\n"
	"\tc. Australia\n"
	"\td. Europe\n",
/*a11*/ "\ta. Pacific\n"
	"\tb. Atlantic\n"
	"\tc. Indian\n"
	"\td. Arctic\n",
/*a12*/ "\ta. Iquique\n"
	"\tb. Puerto Montt\n"
	"\tc. Valparaiso\n"
	"\td. Santiago\n",
/*a13*/ "\ta. Human and Physical\n"
	"\tb. Environmental and Human\n"
	"\tc. Physical and Environmental\n"
	"\td. Environmental and Cartographic\n",
/*a14*/ "\ta. Fakenham\n"
	"\tb. Derry\n"
	"\tc. Bath\n"
	"\td. Derby\n",
/*a15*/ "\ta. Karun\n"
	"\tb. Jordan\n"
	"\tc. Tigris\n"
	"\td. Euphrates\n"
    };


// History Category
    char hist_arr[15][200] = 
    {
/*q1*/	"\tHow many years did the 100 years war last?",
/*q2*/	"\tIn which year was John F. Kennedy assassinated?",
/*q3*/	"\tWhich Greek historian is known as the 'Father of History'?",
/*q4*/	"\tThe ancient city of Rome was built on how many hills?",
/*q5*/	"\tThe Peloponnesian War was fought between Athens \n\tand which other ancient Greek state?",
/*q6*/	"\tWhat is the name of the first known human civilization?",
/*q7*/	"\tWhich English King was best known for beheading his wives?",
/*q8*/	"\tWhich war took place between 1950 and 1953?",
/*q9*/	"\tHow did Joan of Arc die?",
/*q10*/	"\tConstruction of the Berlin Wall began in what year?",
/*q11*/	"\tThe Incan Empire is located in which modern-day country?",
/*q12*/	"\tWho painted the mural 'The Last Supper'?",
/*q13*/	"\tWhich U.S. President was inducted into the \n\tNational Wrestling Hall of Fame in 1992?",
/*q14*/	"\tWhere was Adolf Hitler born?",
/*q15*/	"\tWhen was Pearl Harbor bombed?"
    };

    char hist_ans_arr[15][200] = 
    {
/*a1*/  "\ta. 116 years\n"
	"\tb. 100 years\n"
	"\tc. 96 years\n"
	"\td. 122 years\n",
/*a2*/  "\ta. 1961\n"
	"\tb. 1963\n"
	"\tc. 1965\n"
	"\td. 1968\n",
/*a3*/  "\ta. Thucydides\n"
	"\tb. Aristotle\n"
	"\tc. Herodotus\n"
	"\td. Dionysius\n",
/*a4*/  "\ta. 3\n"
	"\tb. 5\n"
	"\tc. 7\n"
	"\td. 9\n",
/*a5*/  "\ta. Sparta\n"
	"\tb. Corinth\n"
	"\tc. Rhodes\n"
	"\td. Syracuse\n",
/*a6*/  "\ta. Babylon\n"
	"\tb. Mesopotamia\n"
	"\tc. Persepolis\n"
	"\td. Carthage\n",
/*a7*/  "\ta. Henry IV\n"
	"\tb. Henry VI\n"
	"\tc. Henry VIII\n"
	"\td. Henry VII\n",
/*a8*/  "\ta. The Iraq War\n"
	"\tb. The Vietnam War\n"
	"\tc. WWII\n"
	"\td. The Korean War\n",
/*a9*/  "\ta. Burned at the stake\n"
	"\tb. Crucifixion\n"
	"\tc. The Guillotine\n"
	"\td. Torture\n",
/*a10*/ "\ta. 1953\n"
	"\tb. 1961\n"
	"\tc. 1967\n"
	"\td. 1970\n",
/*a11*/ "\ta. Brazil\n"
	"\tb. Chile\n"
	"\tc. Peru\n"
	"\td. Argentina\n",
/*a12*/ "\ta. Michelangelo\n"
	"\tb. Raphael\n"
	"\tc. Caravaggio\n"
	"\td. Leonardo da Vinci\n",
/*a13*/ "\ta. Abraham Lincoln\n"
	"\tb. Thomas Jefferson\n"
	"\tc. Theodore Roosevelt\n"
	"\td. Jimmy Carter\n",
/*a14*/ "\ta. Germany\n"
	"\tb. Austria\n"
	"\tc. Sweden\n"
	"\td. Switzerland\n",
/*a15*/ "\ta. December 3rd, 1940\n"
	"\tb. December 11th, 1942\n"
	"\tc. December 7th, 1941\n"
	"\td. December 13th, 1943\n"
    };


// Music Category
    char music_arr[15][200] = 
    {
/*q1*/	"\tRock band AC/DC originates from which country?",
/*q2*/	"\tWhat was Elvis Presley’s first hit in 1956?",
/*q3*/	"\tWhat decade is the hit single “Love Shack” \n\tby the B-52s from?",
/*q4*/	"\tWhat is Kendrick Lamar’s most famous album according to \n\tthe greatest album chart?",
/*q5*/	"\tWhat is late American rapper Mac Miller’s actual name?",
/*q6*/	"\tWhich Pink Floyd album was the inspiration for the band’s \n\tfamous psychological drama film released in 1982?",
/*q7*/	"\tWhich of these instruments originated from Australia?",
/*q8*/	"\tWhich Beatle had dyslexia?",
/*q9*/	"\tWhat was the name of the Spice Girls debut album released in 1996?",
/*q10*/	"\tHow did American singer/songwriter Otis Redding die?",
/*q11*/	"\tWhat does the Italian word ‘piano’ translate to in musical terms?",
/*q12*/	"\tWho was the lead guitarist of Queen?",
/*q13*/	"\tWhat US festival hosted over 350,000 music fans in 1969?",
/*q14*/	"\tWho is the lead singer of famous heavy metal band, Metallica?",
/*q15*/	"\tWhat artist released the song “Video Games” in 2012?"
    };

    char music_ans_arr[15][200] = 
    {
/*a1*/  "\ta. Australia\n"
	"\tb. Scotland\n"
	"\tc. USA\n"
	"\td. England\n",
/*a2*/  "\ta. Jailhouse Rock\n"
	"\tb. Heartbreak Hotel\n"
	"\tc. Blue Suede Shoes\n"
	"\td. Hound Dog\n",
/*a3*/  "\ta. Sixties\n"
	"\tb. Seventies\n"
	"\tc. Eighties\n"
	"\td. Nineties\n",
/*a4*/  "\ta. Good Kid, m.A.A.d city\n"
	"\tb. Section.80\n"
	"\tc. Untitled Unmastered\n"
	"\td. To Pimp a Butterfly\n",
/*a5*/  "\ta. Malcolm James McCormick\n"
	"\tb. McGregor John Miller\n"
	"\tc. Macauley Jacob Murphy\n"
	"\td. Michael Joseph Martin\n",
/*a6*/  "\ta. Dark Side of the Moon\n"
	"\tb. The Wall\n"
	"\tc. Wish You Were Here\n"
	"\td. Animals\n",
/*a7*/  "\ta. Bangkakaw\n"
	"\tb. Tambol\n"
	"\tc. Didgeridoo\n"
	"\td. Tibod\n",
/*a8*/  "\ta. George Harrison\n"
	"\tb. Ringo Starr\n"
	"\tc. Paul McCartney\n"
	"\td. John Lennon\n",
/*a9*/  "\ta. Spice\n"
	"\tb. Spiceworld\n"
	"\tc. One Hour of Girl Power\n"
	"\td. Forever\n",
/*a10*/ "\ta. Heart attack\n"
	"\tb. Plane accident\n"
	"\tc. Vehicle accident\n"
	"\td. Pancreatic cancer\n",
/*a11*/ "\ta. Lively\n"
	"\tb. Loudly\n"
	"\tc. Softly\n"
	"\td. Slowly\n",
/*a12*/ "\ta. Freddie Mercury\n"
	"\tb. Roger Taylor\n"
	"\tc. John Deacon\n"
	"\td. Brian May\n",
/*a13*/ "\ta. Woodstock\n"
	"\tb. Summer Jam\n"
	"\tc. Glastonbury\n"
	"\td. Heatwave\n",
/*a14*/ "\ta. Kirk Hammett\n"
	"\tb. James Hetfield\n"
	"\tc. Lars Ulrich\n"
	"\td. Cliff Burton\n",
/*a15*/ "\ta. Carly Rae Jepsen\n"
	"\tb. Kelly Clarkson\n"
	"\tc. Lana Del Ray\n"
	"\td. Taylor Swift\n"
    };


// Film Category
    char film_arr[15][200] = 
    {
/*q1*/	"\tWho is regarded as 'The Queen of Sci-Fi'?",
/*q2*/	"\tWhat was the first feature-length animated movie \n\tever released?",
/*q3*/	"\tWhat flavor of Pop Tarts does Buddy the Elf use in \n\this spaghetti in Elf?",
/*q4*/	"\tWhat is the name of the skyscraper in Die Hard?",
/*q5*/	"\tWho played park owner John Hammond in Jurassic Park?",
/*q6*/	"\tWho is the only actor to receive an Oscar nomination for \n\tacting in a Lord of the Rings movie?",
/*q7*/	"\tWhat 1994 crime film revitalized John Travolta’s career?",
/*q8*/	"\tHow many movies has Samuel L. Jackson starred in?",
/*q9*/	"\tWhich Alfred Hitchcock film starred James Stewart \n\tand was shot to look like one continuous take?",
/*q10*/	"\tWhich movie was incorrectly announced as the winner of \n\tBest Picture at the 2017 Academy Awards?",
/*q11*/	"\tIn Apocalypse Now, Robert Duvall says, \n\t'I love the smell of ____ in the morning.'",
/*q12*/	"\tWhat is the model of revolver made famous by \n\tClint Eastwood’s “Dirty” Harry Callahan?",
/*q13*/	"\tWhat is the highest-grossing foreign-language film to date?",
/*q14*/	"\tIn what year were three of Jim Carrey’s blockbuster hits released?",
/*q15*/	"\tWhat was the first movie to ever be rated PG-13?"
     };

     char film_ans_arr[15][200] = 
     {
/*a1*/  "\ta. Sigourney Weaver\n"
	"\tb. Carrie Fisher\n"
	"\tc. Linda Hamilton\n"
	"\td. Gillian Anderson\n",
/*a2*/  "\ta. Steamboat Willie\n"
	"\tb. Snow White and the Seven Dwarves\n"
	"\tc. Alice in Wonderland\n"
	"\td. Gulliver’s Travels\n",
/*a3*/  "\ta. Strawberry\n"
	"\tb. Smores\n"
	"\tc. Chocolate\n"
	"\td. Cherry\n",
/*a4*/  "\ta. Empire State Building\n"
	"\tb. Union Bank Plaza\n"
	"\tc. The Ritz\n"
	"\td. Nakatomi Plaza\n",
/*a5*/  "\ta. Richard Attenborough\n"
	"\tb. Jeff Goldblum\n"
	"\tc. Samuel L. Jackson\n"
	"\td. Alan Grant\n",
/*a6*/  "\ta. Elijah Wood\n"
	"\tb. Ian McKellen\n"
	"\tc. Sean Astin\n"
	"\td. Sean Bean\n",
/*a7*/  "\ta. Leon\n"
	"\tb. Natural Born Killers\n"
	"\tc. Pulp Fiction\n"
	"\td. Shawshank Redemption\n",
/*a8*/  "\ta. At least 84\n"
	"\tb. At least 138\n"
	"\tc. At least 208\n"
	"\td. At least 164\n",
/*a9*/  "\ta. Rope\n"
	"\tb. Psycho\n"
	"\tc. Topaz\n"
	"\td. Sabotage\n",
/*a10*/ "\ta. Moonlight\n"
	"\tb. La La Land\n"
	"\tc. Arrival\n"
	"\td. Hacksaw Ridge\n",
/*a11*/ "\ta. Gunpowder\n"
	"\tb. Biscuits\n"
	"\tc. Napalm\n"
	"\td. Rain\n",
/*a12*/ "\ta. Colt Diamondback .38 Special\n"
	"\tb. Colt King Cobra .357 Magnum\n"
	"\tc. Smith & Wesson Model 19 .357 Magnum\n"
	"\td. Smith & Wesson Model 29 .44 Magnum\n",
/*a13*/ "\ta. Crouching Tiger, Hidden Dragon\n"
	"\tb. Parasite\n"
	"\tc. Hero\n"
	"\td. Pan’s Labyrinth\n",
/*a14*/ "\ta. 1990\n"
	"\tb. 1994\n"
	"\tc. 1992\n"
	"\td. 1996\n",
/*a15*/ "\ta. Dune\n"
	"\tb. Ghostbusters\n"
	"\tc. Red Dawn\n"
	"\td. 2010\n"
    };

char correct_answers[15] = 
    {
/*a1*/	'a', 
/*a2*/	'b',
/*a3*/	'c',
/*a4*/	'd',
/*a5*/	'a', 
/*a6*/	'b',
/*a7*/	'c',
/*a8*/	'd',
/*a9*/	'a', 
/*a10*/	'b',
/*11*/	'c',
/*12*/	'd',
/*13*/	'a', 
/*14*/	'b',
/*15*/	'c'
    };

    // Printing category menu
    do {
    printf("_____________________________________________\n");
    printf("_____________________________________________\n\n");
    printf("\tTo Begin Trivia Night,\n");
    printf("\tPlease choose a category!\n");
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

    // Switch case for category menu
    switch(cat_choice)  
    {  
        case 1 : 
        {
            system("clear");
	    counter++;

 	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(sport_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(sport_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);

    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}
        case 2:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(math_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(math_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);

    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}
        case 3:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(pop_cult_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(pop_cult_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}     
        case 4:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(lit_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(lit_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	} 
        case 5:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(gen_know_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(gen_know_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	} 
        case 6:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(sci_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(sci_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}  
        case 7:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(geo_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(geo_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}
        case 8:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(hist_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(hist_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}
        case 9:
        {
            system("clear");
	    counter++;
	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(music_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(music_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
	    break;
	}
        case 10:
        {
            system("clear");
	    counter++;
   	    for (i = 1; i <=5; i++)
	    {
	    srand(time(NULL));
	    r_num =  l_limit + rand() % (u_limit - l_limit);
	    printf("__________________________________________________________\n");
	    printf("__________________________________________________________\n\n");
	    printf("\tQuestion:\n\n");
	    puts(film_arr[r_num]);
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\tAnswer Choices:\n\n");
	    puts(film_ans_arr[r_num]);
	    printf("\tPlease input your answer below!\n");
	    printf("_________________________________________________________\n");
	    printf("_________________________________________________________\n\n");
	    printf("\t");
	    scanf(" %c", &answer);
    
    	    if (answer == correct_answers[r_num])
    	    {
                t_score = t_score + 1;  
                printf("\tThat is correct! Your score is: %d\n", t_score);
	        printf("\tPlease wait for your next question!\n");
            }
            else
            {
                printf("\tThat is incorrect! Your score is: %d\n", t_score); 
	        printf("\tPlease wait for your next question!\n");  
            }
            sleep(2.5);
	    system("clear");
            }
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
} while ( counter <= 4 );
return t_score;
}
