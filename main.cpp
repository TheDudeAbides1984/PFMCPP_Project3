#include <string> 
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

struct Person 
{
    int age;
    int height;
    float hairlength;
    float GPA;
    unsigned int SATScore;
    int distanceTraveled;

    struct Limb 
    {
        void stepForward();
        int stepSize(int distanceInFeet);
    };
    Limb leftFoot;
    Limb rightFoot;

    void run(int howFast, bool startWithLeftFoot);
};

void Person::Limb::stepForward() {}

int Person::Limb::stepSize(int distanceInFeet) 
{
    return distanceInFeet;
}

 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

struct Dog
{
    std::string hairColor = "brown";
    std::string breed = "doberman";
    std::string temperament = "aggressive";
    float weight = 75.7f; // pounds
    float hairlength = 0.5f; // inches
    
    float run (float weight, std::string breed); // to determine a general speed
    void bark(std::string breed, std::string temperament);
    void whine(std::string breed, std::string temperament);
};

float Dog::run(float weightInPounds, std::string dogBreed)
{
    float maxSpeed = 0;
    // sample function body to return speed
    if(dogBreed == "doberman" && weightInPounds <= 70)
    {
        maxSpeed = 35; // mph
    } 
    else 
    {
        maxSpeed = 25;
    }
    return maxSpeed;
}

void Dog::bark(std::string dogBreed, std::string mannerTemperament)
{
    breed = dogBreed;
    temperament = mannerTemperament;
}

void Dog::whine(std::string dogBreed, std::string mannerTemperament)
{
    breed = dogBreed;
    temperament = mannerTemperament;
}

struct Cat
{
    std::string hairColor = "black";
    std::string breed = "domestic short hair";
    std::string temperament = "friendly";
    float hairLength = 0.75f; // inches

    void meow(std::string breed, std::string temperament);
    void purr(std::string breed, std::string temperament);
    void scratch(std::string breed, std::string temperament);
};

void Cat::meow(std::string catBreed, std::string mannerTemperament)
{
    breed = catBreed;
    temperament = mannerTemperament;
}

void Cat::purr(std::string catBreed, std::string mannerTemperament)
{
    breed = catBreed;
    temperament = mannerTemperament;
}

void Cat::scratch(std::string catBreed, std::string mannerTemperament)
{
    breed = catBreed;
    temperament = mannerTemperament;
}

struct Guitar
{
    std::string brand = "Ibanez";
    std::string model = "rg550";
    std::string color = "purple";
    int stringCount = 6;
    int pickupConfig = 2; // number of pickups

    void outputSound(int pickupConfig);
    void plugIntoAmp();
    int breakAString(int stringCount);
};

void Guitar::outputSound(int numOfPickups)
{
    pickupConfig = numOfPickups;
}

void Guitar::plugIntoAmp() {}

int Guitar::breakAString(int numOfStrings)
{
    stringCount = numOfStrings;
    return numOfStrings;
}

struct Computer
{
    std::string manufacturer = "Apple";
    std::string operatingSystem = "Mojave 10.14";
    int ram = 32;
    int storage = 6000; // gigabytes
    std::string cpu = "6-Core Intel Xeon";

    void calculate(int ram, std::string cpu);
    void record(int ram, std::string cpu, int storage);
    void edit(int ram, std::string cpu);
};

void Computer::calculate(int ramInGB, std::string cpuModel)
{
    ram = ramInGB;
    cpu = cpuModel;
}

void Computer::record(int ramInGB, std::string cpuModel, int storageInGB)
{
    ram = ramInGB;
    cpu = cpuModel;
    storage = storageInGB;
}

void Computer::edit(int ramInGB, std::string cpuModel)
{
    ram = ramInGB;
    cpu = cpuModel;
}

struct StudioConsole
{
    int inputCount = 48;
    int auxOutTotal = 16;
    int busTotal = 8;
    std::string manufacturer = "API";
    std::string model = "API 1608-II";

    void changeLevels(int inputCount);
    void changeTone();
    void sumInputs(int inputCount, int busTotal);
};

void StudioConsole::changeLevels(int inputChannelCount)
{
    inputCount = inputChannelCount;
}

void StudioConsole::changeTone(){}

void StudioConsole::sumInputs(int inputChannelCount, int summingBusTotal)
{
    inputCount = inputChannelCount;
    busTotal = summingBusTotal;
}

struct StudioComputer
{
    std::string manufacturer = "Apple";
    std::string operatingSystem = "Mojave 10.14";
    int ram = 32;
    int storage = 6000;
    std::string cpu = "6-Core Intel Xeon";
    
    int appsInstalled(int ram, int storage);
    void makeCalculations(int ram, int storage);
    int storeFiles(int storage);

    struct ComputerModel
    {
        int year = 2009;
        std::string model = "Mac Pro";
        int coreCount;

        void renderFiles(int coreCount = 12);
    };
};

int StudioComputer::appsInstalled(int ramInGB, int storageInGB)
{
    int totalApps = 30;
    ram = ramInGB;
    storage = storageInGB;

    return totalApps;
}

void StudioComputer::makeCalculations(int ramInGB, int storageInGB)
{
    ram = ramInGB;
    storage = storageInGB;  
}

int StudioComputer::storeFiles(int storageInGB)
{
    storage = storageInGB;  

    return storageInGB;
}

void StudioComputer::ComputerModel::renderFiles(int numOfCores)
{
    coreCount = numOfCores;
}

struct DAW
{
    std::string company = "Cockos";
    int price = 60;
    int compatiblePlatforms = 2; // Windows and Mac
    int channelCount = 0; // no limit
    int maxPluginsPerChannel = 0; //no limit
    float versionNumber;

    void record(int channelCount);
    void edit(int channelCount);
    void mix(int channelCount, int maxPluginsPerChannel);

    struct Software
    {
        std::string name = "Reaper";
        double versionNumber = 6.08;

        double updateVersion(double versionNumber = 6.08);
    };
};

void DAW::record(int maxChannelCount)
{
    channelCount = maxChannelCount;
}

void DAW::edit(int maxChannelCount)
{
    channelCount = maxChannelCount;
}

void DAW::mix(int maxChannelCount, int maxPlugsPerChannel)
{
    channelCount = maxChannelCount;
    maxPluginsPerChannel = maxPlugsPerChannel;
}

double DAW::Software::updateVersion(double currentVersionNumber)
{
    versionNumber = currentVersionNumber;

    return currentVersionNumber;
}

struct TrackingRoom
{
    float squareFootage = 1200.0f;
    float ceilingHeight = 15.0f;
    float soundDampening = 50.0f; // percentage of walls covered in sound absorption
    std::string floorMaterial = "oak";
    float rugCoverage = 60.0f; // percentage of floor covered by rugs

    float reflectSound(float squareFootage, 
                       float ceilingHeight, 
                       float soundDampening,
                       std::string floorMaterial, 
                       float rugCoverage);
    float absorbSound(float squareFootage, 
                      float ceilingHeight, 
                      float soundDampening,
                      std::string floorMaterial, 
                      float rugCoverage);
    float storeGear(int squareFootage);
};

float TrackingRoom::reflectSound(float squareFootageInFeet, 
                                 float ceilingHeightInFeet, 
                                 float soundDampeningPercentage,
                                 std::string floorMaterialType, 
                                 float rugCoveragePercentage) 
{
    float reflectedSound = 100 - soundDampeningPercentage;
    squareFootage = squareFootageInFeet;
    ceilingHeight = ceilingHeightInFeet;
    soundDampening = soundDampeningPercentage;
    floorMaterial = floorMaterialType;
    rugCoverage = rugCoveragePercentage;

    return reflectedSound;
}

float TrackingRoom::absorbSound(float squareFootageInFeet, 
                                float ceilingHeightInFeet, 
                                float soundDampeningPercentage,
                                std::string floorMaterialType, 
                                float rugCoveragePercentage) 
{
    squareFootage = squareFootageInFeet;
    ceilingHeight = ceilingHeightInFeet;
    soundDampening = soundDampeningPercentage;
    floorMaterial = floorMaterialType;
    rugCoverage = rugCoveragePercentage;

    return soundDampeningPercentage;
}

float TrackingRoom::storeGear(int squareFootageInFeet)
{
    squareFootage = squareFootageInFeet;

    return squareFootageInFeet;
}

struct StudioMonitor
{
    std::string manufacturer = "Blue Sky";
    float price = 499.99f;
    int lowDriverSize = 3; // inches
    int highDriverSize = 1; // inches
    int lowestFreq = 40;
    float soundOutput = 100.0; // dB
    int maxPowerConsumption = 240; // watts

    void speakerReference();
};

void StudioMonitor::speakerReference(){}

struct RecordingStudio
{
    StudioConsole consoleModel;
    StudioComputer computerModel;
    DAW software;
    TrackingRoom drumRoom;
    StudioMonitor blueSkyEvo;

    void record(DAW software, StudioComputer computerModel, StudioConsole consoleModel);
    void edit(DAW software, StudioComputer computerModel);
    void mix(StudioConsole console, DAW software);
};

void RecordingStudio::record(DAW reaper, 
                             StudioComputer macPro, 
                             StudioConsole neve)
{
    software = reaper;
    computerModel = macPro;
    consoleModel = neve;
}

void RecordingStudio::edit(DAW reaper, StudioComputer macPro)
{
    software = reaper;
    computerModel = macPro;
}

void RecordingStudio::mix(StudioConsole neve, DAW reaper)
{
    consoleModel = neve;
    software = reaper;
}

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
