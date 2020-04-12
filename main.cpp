#include <iomanip>

/*
Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
User-Defined Types

Create a branch named Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to reinforce the syntax habits that C++ requires.  What you create in this project will be used as the basis of Project 5 in the course.   

1) write 10 user-defined types in plain english
   - This step will involve several checkpoints before it is complete.

Checkpoint 1:
    Fill in #1 - 4 with a random UDT in plain english
    These 4 UDTs do not need to be related.
    For each plain-english UDT, write out 3 things it can do, and 5 traits or properties.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 2:
    For the 10th UDT, come up with an object that is made of 5 smaller parts.
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding to the next Checkpoint
************************

Checkpoint 3: 

    Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, until the smallest object is made of up only C++ primitives. 

    These 5 things can be broken down into their own sub-objects and properties. 

    For example: Display
    A Display has the following 5 traits or properties:
        pixels
        amount of power consumed.
        brightness.
        width
        height

    the Display's brightness can be represented with a Primitive, such as a double. 
    The amount of power consumed can also be represented with a Primitive.
    The 'pixels' must be represented with an array of Pixel instances.  Arrays have not been discussed and can't be used in this project.
    Instead, we can use an Integer primitive to describe the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed
        Brightness

    Notice that I did not write "has a display" or "Has memory" or "has a cpu"  
    Writing 'has a ___" checks whether or not your object *has the ability to do something*.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    In C++ terms, this means to I want you to avoid bool (has a) as a member variable type.
    Instead, prefer the other primitive types when you get to step 2)

************************
    Commit after you complete this step so i can review before you proceed
    Ping me in Slack to review this step.
    Wait for me to review before proceeding with step 2.
************************
  
 2) define your struct for each of your 10 types. 
    - Copy your 3 actions & 5 traits into your struct body.
    - comment them out.
    - I recommend compiling after finishing each one and making sure it compiles without errors or warnings before moving on to writing the next UDT.
 
 3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
 4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions in part2 for these functions
    - you'll call each of these functions in part3
 
 5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs at least 2 member functions.
    - these nested classes are not considered one of your 10 UDTs.
 
 6) your 10th UDTs should only use 5 of your other UDTs for its member variable types.   
    - No primitives allowed!
 
 7) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

/*
 example:  

//1) write out, in plain-english, 5 traits and 3 things it can do.
Car Wash   
5 properties:
    1) vacuum cleaners
    2) eco-friendly cleaning supplies
    3) stores the amount of water used per week.
    4) stores amount of profit made per week
    5) number of cars serviced per day

3 things it can do:
    1) wash and wax car
    2) charge customer
    3) detail the car interior
 */
struct CarWash //2)        
{
    //2) has vacuum cleaners
    int numVacuumCleaners = 3; //3) member variables with relevant data types.
    //2) has eco-friendly cleaning supplies
    int numEcoFriendlyCleaningSupplies = 20; //3) member variables with relevant data types.
    //2) stores the amount of water used per week.
    float waterUsedPerWeek = 200.f; //3) member variables with relevant data types.
    //2) stores amount of profit made per week
    float profitPerWeek = 495.95f; //3) member variables with relevant data types.
    //2) number of cars serviced per day
    int numberOfCarsServiced = 10; //3) member variables with relevant data types.
    
    //5) make 2 of the 10 user-defined types have a nested class. 
    struct Car   
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);   
    };

    /* 
    member functions with a user-defined type as the parameter.
    The user-defined type parameter happens to be the nested class.
    */

    //2) wash and wax car
    void washAndWaxCar( Car car );
    //2) charge customer
    float chargeCustomer();
    //2) detail the car interior
    void detailInterior( Car car );
    
               
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


//1) Dog

struct Dog
{
//    1) hair color
    std::string hairColor = "brown";
//    2) breed
    std::string breed = "doberman";
//    3) temperament
    std::string temperament = "aggressive";
//    4) weight
    float weight = 75.7f; // pounds
//    5) hair length
    float hairlength = 0.5f; // inches

//    3 things it can do:

//    1) run
    float run (float weight, std::string breed); // to determine a general speed
//    2) bark
    void bark(std::string breed, std::string temperament);
//    3) whine
    void whine(std::string breed, std::string temperament);
//    */
};

//2) Cat
struct Cat
{
//    1) hair color
    std::string hairColor = "black";
//    2) breed
    std::string breed = "domestic short hair";
//    3) temperament
    std::string temperament = "friendly";
//    4) weight
    float weight = 10.0f; // pounds
//    5) hair length
    float hairLength = 0.75f; // inches

//3 things it can do:

//    1) meow
    void meow(std::string breed, std::string temperament);
//    2) purr
    void purr(std::string breed, std::string temperament);
//    3) scratch
    void scratch(std::string breed, std::string temperament);
};

//3) Guitar

struct Guitar
{
//    1) brand
    std::string brand = "Ibanez";
//    2) model
    std::string model = "rg550";
//    3) color
    std::string color = "purple";
//    4) string count
    int stringCount = 6;
//    5) pickup config
    int pickupConfig = 2; // number of pickups

//3 things it can do:

//    1) output sound
    void outputSound(int pickupConfig);
//    2) plug into amp
    void plugIntoAmp();
//    3) break a string
    int breakAString(int stringCount);
};

//4) Computer

struct Computer
{
//    1) manufacturer
    std::string manufacturer = "Apple";
//    2) OS
    std::string operatingSystem = "Mojave 10.14";
//    3) amount of ram
    int ram = 32;
//    4) amount of storage
    int storage = 6000; // gigabytes
//    5) cpu
    std::string cpu = "6-Core Intel Xeon";

//3 things it can do:

//    1) calculate
    void calculate(int ram, std::string cpu);
//    2) record
    void record(int ram, std::string cpu, int storage);
//    3) edit
    void edit(int ram, std::string cpu);
// */
};

//5) Studio Console

struct StudioConsole
{
//    1) input count
    int inputCount = 48;
//    2) aux out total
    int auxOutTotal = 16;
//    3) bus total
    int busTotal = 8;
//    4) manufacturer
    std::string manufacturer = "API";
//    5) model
    std::string model = "API 1608-II";

//    3 things it can do:

//    1) change levels
    void changeLevels(int inputCount);
//    2) change tone
    void changeTone();
//    3) sum inputs
    void sumInputs(int inputCount, int busTotal);
};

//6) Studio Computer

struct StudioComputer
{
//    1) manufacturer
    std::string manufacturer = "Apple";
//    2) OS
    std::string operatingSystem = "Mojave 10.14";
//    3) amount of ram
    int ram = 32;
//    4) amount of storage
    int storage = 6000;
//    5) cpu
    std::string cpu = "6-Core Intel Xeon";

//    3 things it can do:

//    1) host apps
    int appsInstalled(int ram, int storage);
//    2) make calculations
    void makeCalculations(int ram, int storage);
//    3) store files
    int storeFiles(int storage);

    struct computerModel
    {
        int year = 2009;
        std::string model = "Mac Pro";

        void renderFiles(int numberOfCores = 12);
    };
};

//7) DAW

struct DAW
{
//    1) company
    std::string company = "Cockos";
//    2) price
    int price = 60;
//    3) compatible platforms
    int compatiblePlatforms = 2; // Windows and Mac
//    4) channel count
    int channelCount = 0; // no limit
//    5) max plugin per channel
    int maxPluginsPerChannel = 0; //no limit

//    3 things it can do:

//    1) record
    void record(int channelCount);
//    2) edit
    void edit(int channelCount);
//    3) mix
    int mix(int channelCount, int maxPluginsPerChannel);
//    */
    struct Software
    {
        std::string name = "Reaper";
        double versionNumber = 6.08;

        double updateVersion(double versionNumber = 6.08);
    };
};

//8) Tracking room

struct TrackingRoom
{
//    1) square footage
    float squareFootage = 1200.0f;
//    2) ceiling height
    float ceilingHeight = 15.0f;
//    3) sound dampening
    float soundDampening = 50.0f; // percentage of walls covered in sound absorption
//    4) floor material
    std::string floorMaterial = "oak";
//    5) amount of rug coverage on floor
    float rugCoverage = 60.0f; // percentage of floor covered by rugs
//    3 things it can do:
//    1) reflect sound
    float reflectSound(float squareFootage, 
                       float ceilingHeight, 
                       float soundDampening,
                       std::string floorMaterial, 
                       float rugCoverage);
//    2) absorb sound
    float absorbSound(float squareFootage, 
                      float ceilingHeight, 
                      float soundDampening,
                      std::string floorMaterial, 
                      float rugCoverage);
//    3) accomodate musical equipment
    float storeGear(int squareFootage);
};

//9) Studio Monitor

struct StudioMonitor
{
//    1) manufacturer
    std::string manufacturer = "Blue Sky";
//    2) price
    float price = 499.99f;
//    3) LF driver size
    int lowDriverSize = 3; // inches
//    4) HF driver size
    int highDriverSize = 1; // inches
//    5) lowest output frequency
    int lowestFreq = 40;

//3 things it can do:

//    1) output sound
    float soundOutput = 100.0; // dB
//    2) consume power
    int maxPowerConsumption = 240; // watts
//    3) provide reference to other speakers
    void speakerReference();
};

// 10) Recording Studio

 struct RecordingStudio
 {
//    1) Console
    StudioConsole consoleModel;
//    2) computer
    StudioComputer computerModel;
//    3) DAW
    DAW software;
//    4) tracking room
    TrackingRoom drumRoom;
//    5) Studio Monitor
    StudioComputer blueSkyEvo;

//3 things it can do:

//    1) record
    void record(int channelCount);
//    2) edit
    void edit(std::string daw, int channelCount);
//    3) mix
    int mix(std::string consoleModel, int channelCount, int maxPluginsPerChannel);
};


/*
1) Dog
5 properties:
    1) hair color
    2) breed
    3) temperment
    4) size
    5) hair length
3 things it can do:
    1) run
    2) bark
    3) whine
 */

/*
2) Cat
5 properties:
    1) hair color
    2) breed
    3) temperment
    4) size
    5) hair length
3 things it can do:
    1) meow
    2) purr
    3) scratch
 */

/*
3) Guitar
5 properties:
    1) make
    2) model
    3) color
    4) string count
    5) pickup config
3 things it can do:
    1) output sound
    2) plug into amp
    3) break a string
 */

/*
4) Computer
5 properties:
    1) manufacturer
    2) OS
    3) amount of ram
    4) amount of storage
    5) cpu
3 things it can do:
    1) calculate
    2) record
    3) edit
 */

/*
5) Studio Console
5 properties:
    1) input count
    2) aux out total
    3) bus total
    4) manufacturer
    5) model
3 things it can do:
    1) change levels
    2) change tone
    3) sum inputs 
 */

/*
6) Studio Computer
5 properties:
    1) manufacturer
    2) OS
    3) amount of ram
    4) amount of storage
    5) cpu
3 things it can do:
    1) host apps
    2) make calculations
    3) store files
 */

/*
7) DAW
5 properties:
    1) company
    2) price
    3) compatible platforms
    4) channel count
    5) max plugin per channel
3 things it can do:
    1) record
    2) edit 
    3) mix
 */

/*
8) Tracking room
5 properties:
    1) square footage
    2) ceiling height
    3) sound dampening
    4) floor material
    5) amount of rug coverage on floor
3 things it can do:
    1) reflect sound
    2) absorb sound
    3) accomodate musical equipment
 */

/*
9) Studio Monitor
5 properties:
    1) manufacturer
    2) price
    3) LF driver size
    4) HF driver size
    5) lowest output frequency
3 things it can do:
    1) output sound
    2) consume power
    3) provide reference to other speakers
 */

/*
 10) Recording Studio
5 properties:
    1) Console
    2) computer
    3) DAW
    4) tracking room
    5) Studio Monitor
3 things it can do:
    1) record
    2) edit
    3) mix
 */



#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
