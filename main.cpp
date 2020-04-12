 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 0) delete all of the plain english pseudo-code you added in Part1.
   - you should be left with only your UDTs.

 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


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
