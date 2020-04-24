/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4

 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.

 3) click the [run] button.  Clear up any errors or warnings as best you can.

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

 Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

#include <iostream>
namespace Example {
    struct UDT
    {
        int a; //a member variable
        float b { 2.f }; //3) in-class initialization
        UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
        void printThing()  //the member function
        {
            std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
        }
    };

    int main()
    {
        UDT foo; //instantiating a Foo in main()
        foo.printThing(); //calling a member function of the instance that was instantiated.
        return 0;
    }
}


struct Dog
{
    std::string hairColor;
    std::string breed;
    std::string temperament;
    float weight;
    float hairLength;

    Dog();

    float run (float weight, std::string breed); // to determine a general speed
    void bark(std::string breed, std::string temperament);
    void whine(std::string breed, std::string temperament);
};

Dog::Dog() : hairColor  ("brown"),
             breed ( "doberman"),
             temperament ("aggressive"),
             weight (75.7f), // pounds
             hairLength (0.5f) // inches
{

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
    float hairLength = 0.75f; // inches

    void meow(std::string breed, std::string temperament);
    void purr(std::string breed, std::string temperament);
    void scratch(std::string breed, std::string temperament);
};

Cat::Cat() {}

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

#include <iostream>
int main()
{
    Dog bob;
    bob.bark("labrador", "friendly");

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
              << " inch horn." << std::endl;
    std::cout << std::endl;

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
