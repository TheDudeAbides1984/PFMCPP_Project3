#include <iomanip>
/*
 Project 3 - Part 5 / 5
 video: Chapter 2 - Part 10
 Scope and Lifetime tasks

Create a branch named Part5

 video covered:
    variable scope and lifetime relative to { }
    while loops
    for loops()

 tasks

 1) add some new member functions to your types.

 2) use while() or for() loops to do something interesting inside these new member functions.
         a) for example: have a loop that modifies a member variable of some object created outside the loop.
         b) when that member variable reaches a certain threshold, return it mid-loop.
         c) maybe use function parameters to control the starting value of that member variable or control the threshold

 3) call those new member functions in main()

 4) use std::cout statements to print out information about what your loops did.

 5) click the [run] button.  Clear up any errors or warnings as best you can.

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.

 example:
 */

#include <iostream>
namespace Example {
    struct Bar
    {
        int num = 0;
        Bar(int n) : num(n) { }
    };
    struct Foo
    {
        Bar scopeLifetimeFunc( int threshold, int startingVal ) //3), 4c)
        {
            Bar bar(startingVal);                //4a)
            while( bar.num < threshold )         //4a)
            {
                bar.num += 1;                    //4a)

                if( bar.num >= threshold )       //4b)
                    return bar;
            }

            return Bar {-1}; //if your startingValue >= threshold, the while loop never runs
        }
    };

    int main()
    {
        Foo foo;
        auto bar = foo.scopeLifetimeFunc(3, 1);        //5)

        std::cout << "bar.num: " << bar.num << std::endl;     //6)
        return 0;
    }
}

//call Example::main() in main()

struct Dog
{
    std::string hairColor;
    std::string breed;
    std::string temperament;
    std::string name;
    float weight;
    float hairLength;
    int idealWeight;

    Dog();

    float run (float weight, std::string breed); // to determine a general speed
    void bark(std::string breed, std::string temperament);
    void whine(std::string breed, std::string temperament);
    float gainWeight(float currentWeight, int idealDogWeight);

};

Dog::Dog() : hairColor  ("brown"),
             breed ( "doberman"),
             temperament ("aggressive"),
             weight (75.7f), // pounds
             hairLength (0.5f),
             idealWeight (0)// inches
{

}

float Dog::gainWeight(float currentWeight, int idealDogWeight)
{
    idealWeight = idealDogWeight;
    weight = currentWeight;
    for (int i = 0; currentWeight < idealDogWeight; ++i)
    {
        ++currentWeight;
    }
    return currentWeight;
}

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

    std::cout << "This dog is a " << temperament << " " << dogBreed
              << ". Thankfully it doesn't bark too much. " << std::endl;
    std::cout << std::endl;
}

void Dog::whine(std::string dogBreed, std::string mannerTemperament)
{
    breed = dogBreed;
    temperament = mannerTemperament;
}

struct Cat
{
    Cat();
    std::string hairColor = "black";
    std::string breed = "domestic short hair";
    std::string temperament = "friendly";
    float hairLength = 0.75f;
    int napIntervals; // hours

    void meow(std::string breed, std::string temperament);
    void purr(std::string breed, std::string temperament);
    void scratch(std::string breed, std::string temperament);
    int sleep(int catNapIntervals);
};

Cat::Cat() {}

int Cat::sleep(int catNapIntervals)
{
    napIntervals = catNapIntervals;
    int hoursICanStudy = 0;
    for (int i = 0; i < 24; ++i)
    {
        if (i % napIntervals == 0) {
            ++hoursICanStudy;
        }
    }
    return hoursICanStudy;
}

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
    Guitar();
    std::string brand;
    std::string model;
    std::string color;
    int stringCount;
    int pickupConfig; // number of pickups

    void outputSound(int pickupConfig);
    void plugIntoAmp();
    int breakAString(int stringCount);
};

Guitar::Guitar() : brand("Ibanez"),
                   model("rg550"),
                   color("purple"),
                   stringCount(6),
                   pickupConfig(2)
{

}

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
    Computer();
    std::string manufacturer = "Apple";
    std::string operatingSystem = "Mojave 10.14";
    int ram = 32;
    int storage = 6000; // gigabytes
    std::string cpu = "6-Core Intel Xeon";

    void calculate(int ram, std::string cpu);
    void record(int ram, std::string cpu, int storage);
    void edit(int ram, std::string cpu);
};

Computer::Computer() {}

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

    if (ramInGB < 16 && storageInGB < 100)
    {
        std::cout << "You should consider upgrading your machine by adding more memory and more storage. " << std::endl;
    }
    else
    {
        std::cout << "Your machine has " << ramInGB << " ram and " << storageInGB
                  << " gb of hard drive space. It should work for recording." << std::endl;
        std::cout << std::endl;
    }
}

void Computer::edit(int ramInGB, std::string cpuModel)
{
    ram = ramInGB;
    cpu = cpuModel;
}

struct StudioConsole
{
    StudioConsole();
    int inputCount;
    int auxOutTotal;
    int busTotal;
    std::string manufacturer;
    std::string model;

    void changeLevels(int inputCount);
    void changeTone();
    void sumInputs(int inputCount, int busTotal, int auxOutTotal);
};

StudioConsole::StudioConsole() : inputCount(48),
                                 auxOutTotal(16),
                                 busTotal(8),
                                 manufacturer("API"),
                                 model("API 1608-II")
{

}

void StudioConsole::changeLevels(int inputChannelCount)
{
    inputCount = inputChannelCount;
}

void StudioConsole::changeTone(){}

void StudioConsole::sumInputs(int inputChannelCount, int summingBusTotal, int auxTotal)
{
    inputCount = inputChannelCount;
    busTotal = summingBusTotal;
    auxOutTotal = auxTotal;

    std::cout << "The console has " << inputCount << " inputs and " << auxTotal
              << " aux outputs. Those inputs can be summed into a total of " << busTotal << " busses for mixdown." << std::endl;
    std::cout << std::endl;
}

struct StudioComputer
{
    StudioComputer();
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

        ComputerModel();
        int year = 2009;
        std::string model = "Mac Pro";
        int coreCount;

        void renderFiles(int coreCount = 12);
    };
};

StudioComputer::StudioComputer() {}

StudioComputer::ComputerModel::ComputerModel() {}

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
    DAW();
    std::string company;
    int price;
    int compatiblePlatforms; // Windows and Mac
    int channelCount; // no limit
    int maxPluginsPerChannel; //no limit
    float versionNumber;

    void record(int channelCount);
    void edit(int channelCount);
    void mix(int channelCount, int maxPluginsPerChannel);
    float calcRecordStoragePerSecond(int numOfFiles, float maxRecordTime);


    struct Software
    {
        Software();
        std::string name = "Reaper";
        float versionNumber = 6.08f;

        float updateVersion(float versionNumber = 6.08f);
    };
};

DAW::DAW() : company("Cockos"),
             price(60),
             compatiblePlatforms(2),
             channelCount(0),
             maxPluginsPerChannel(0),
             versionNumber(6.08f)
{

}

DAW::Software::Software() {}

float DAW::calcRecordStoragePerSecond(int numOfFiles, float maxRecordTime)
{
    float totalStorageInKB = 0;
    float numOfSeconds = 0;

    while (numOfSeconds < maxRecordTime)  
    {
        ++numOfSeconds;
        totalStorageInKB = numOfFiles * numOfSeconds * 88.2f;
        
        // std::cout <<totalStorageInKB << std::endl;
    }
    float totalStorageInMB = totalStorageInKB * .0001f;
    return totalStorageInMB;
}

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

float DAW::Software::updateVersion(float currentVersionNumber)
{
    versionNumber = currentVersionNumber;

    return currentVersionNumber;
}

struct TrackingRoom
{
    TrackingRoom();
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

TrackingRoom::TrackingRoom() {}

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

    std::cout << "The amount of sound this room will reflect depends on the percentage"
              << " \nof walls covered in soundproofing and rugs covering the hardwood floors."
              << " \nIn the case, " << soundDampeningPercentage << " of the walls are covered"
              << " and " << rugCoveragePercentage << " of the hardwood floors are covered." << std::endl;
    std::cout << std::endl;

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
    StudioMonitor();
    std::string manufacturer;
    float price;
    int lowDriverSize; // inches
    int highDriverSize; // inches
    int lowestFreq;
    float soundOutput; // dB
    int maxPowerConsumption; // watts

    void speakerReference();
};

StudioMonitor::StudioMonitor() : manufacturer("Blue Sky"),
                                 price(499.99f),
                                 lowDriverSize(3),
                                 highDriverSize(1),
                                 lowestFreq(40),
                                 soundOutput(100.0),
                                 maxPowerConsumption(240)
{

}

void StudioMonitor::speakerReference(){}

struct RecordingStudio
{
    RecordingStudio();
    StudioConsole consoleModel;
    StudioComputer computerModel;
    DAW software;
    TrackingRoom drumRoom;
    StudioMonitor blueSkyEvo;

    void record(DAW software, StudioComputer computerModel, StudioConsole consoleModel);
    void edit(DAW software, StudioComputer computerModel);
    void mix(StudioConsole console, DAW software);
};

RecordingStudio::RecordingStudio()
{

}

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

struct Wave
{
    Wave();
    int height;
    int timeTraveled; // hours
    int speed; // mph

    int waveAccelerate(int waveSpeed, int timeWaveTraveled);    
    bool crash(int height, Wave wave);
};

Wave::Wave()
{
     height = 6;
     speed = 0;
     speed = 0;
}

int Wave::waveAccelerate(int waveSpeed, int timeWaveTraveled)
{
    speed = waveSpeed;
    timeTraveled = timeWaveTraveled;
    int distanceTraveled = 0;

    for (int i = 0; i < timeWaveTraveled; ++i)
    {
        waveSpeed += 4;
        distanceTraveled = waveSpeed * timeWaveTraveled;
    }
    return distanceTraveled;
}

bool Wave::crash(int waveHeight, Wave wave)
{
    height = waveHeight;
    bool willCrash = false;
    while (wave.waveAccelerate(wave.speed, wave.timeTraveled) > 300 && wave.height >= 2)
    {
        willCrash = wave.height >= 2 && wave.speed >= 4;
    }
    return willCrash;
}

#include <iostream>
int main()
{
    DAW reaper;
    

    std::cout << "A wav file at 16 bit/ 44.1 K consumes 88.2KB in storage. So recording 10 files for 3 minutes will consume " 
    << std::setprecision(2) << reaper.calcRecordStoragePerSecond(10, 60.0) << " MB in hard drive space.\n" << std::endl;


    Wave pipelineWave;
    pipelineWave.timeTraveled = 4;
    pipelineWave.speed = 50;

    std::cout << "For every hour a wave travels, its speed increases by 4mph. "
              << "In this case the wave \nhas traveled for " << pipelineWave.timeTraveled
              << " hours at a starting speed of " << pipelineWave.speed 
              << " mph. So the wave has traveled "
              << pipelineWave.waveAccelerate(pipelineWave.speed, pipelineWave.timeTraveled)
              << " miles. \n" << std::endl;

    Wave rockawayWave;
    rockawayWave.height = 1;

    rockawayWave.height = 1;
    rockawayWave.speed = 50;
    rockawayWave.crash(rockawayWave.height, rockawayWave);

    std::cout << "A wave will only crash if it is at least 2ft high and has traveled "
              << "at least 300 total miles to the shore. Otherwise it will just be "
              << "a ripple. This wave is " << rockawayWave.height << " ft high and has "
              << "a starting speed of " << rockawayWave.speed << " mph.\n" << std::endl;

    if (rockawayWave.crash(rockawayWave.height, rockawayWave))
    {
        std::cout << "This wave will crash.\n" << std::endl;
    }
    else
    {
        std::cout << "This wave is too small to crash.\n" << std::endl;
    }

    Dog bob;
    bob.bark("labrador", "friendly");
    bob.name = "Bob";
    bob.gainWeight(45.0f,60);

    std::cout << bob.name << " is too skinny, and only weighs " << bob.weight
              << " lbs. I'm putting him on a weight gain diet so he can get up to "
              << bob.idealWeight << " lbs. \n" << std::endl;

    Cat whiskers;
    whiskers.napIntervals = 4;

    std::cout << "I can only study code when my cat is sleeping. She takes hour "
              << "long naps every " << whiskers.napIntervals << " hours. \nSo I can "
              << "only only study " << whiskers.sleep(4) << " hours per day." 
              << "Otherwise she won't stay off the g!@#%$@ keyboard. \n" << std::endl;

    TrackingRoom littleMountain;
    littleMountain.reflectSound(34.23f, 23.5f, 23.5f, "oak", 23.4f);

    Computer myMac;
    myMac.record(32, "12-Core Xeon", 6000);

    StudioConsole ssl;
    ssl.sumInputs(48,3, 16);

    StudioMonitor blueSky;
    blueSky.lowDriverSize = 3;
    blueSky.highDriverSize = 1;
    blueSky.lowestFreq = 35;

    std::cout << "A good bang for buck set of monitors is the Blue Sky system. "
              << "It outputs down to " << blueSky.lowestFreq << " hz and has a "
              << blueSky.lowDriverSize << " inch woofer and a " << blueSky.highDriverSize
              << " inch horn. \n" << std::endl;

    Guitar guitar;
    guitar.brand = "ESP";
    guitar.model = "LTD";
    guitar.color = "black";

    std::cout << "This guitar is a " << guitar.color << " model " << guitar.model << " made by " << guitar.brand << std::endl;
    std::cout << std::endl;

    StudioConsole studioConsole;

    Example::main();
    std::cout << "good to go!" << std::endl;
}
