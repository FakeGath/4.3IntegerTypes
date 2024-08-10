// Library that includes basic commands
#include <iostream>

int main (){
    //Braced initialization 
    //Variable may contain random garbage value. WARNING
    /*
    int elephant_Count;

    int lion_Count{}; //Initializes to zero;
    int dog_Count{10}; //Initializes to 10;
    int cat_Count{15}; //Initializes to 15;

    //Can use expression as initializer;
    int domesticated_Animals {dog_Count + cat_Count};

    //Prints out the Values on the variables mentioned above;

    std::cout<<"Elephant Count: "<< elephant_Count << std::endl;
    std::cout<<"Lion Count: "<< lion_Count << std::endl;
    std::cout<<"Dog Count: "<< dog_Count << std::endl;
    std::cout<<"Cat Count: "<< cat_Count << std::endl;
    std::cout<<"Domesticated Count: "<< domesticated_Animals << std::endl;

    
    Variable does not exist 
    int new_Number {doesnt_Exist};
    */

    /*
    Incorrect Data type dec on int
    int narrowing_Conversion{2.4};
    std::cout<<"Cat Count: "<< cat_Count << std::endl;
    */

    //Functional Initialization
    int apple_Count(5);
    int orange_Count(10);
    int fruit_Count (apple_Count+orange_Count);
    // int bad_initialization (doesntexist3 + doesntexist4);
    int narrowing_conversion_functional (2.9);

    std::cout<<"Apple Count: "<< apple_Count << std::endl;
    std::cout<<"Orange Count: "<< orange_Count << std::endl;
    std::cout<<"Fruit Count: "<< fruit_Count << std::endl;
    std::cout<<"Narrowing conversion Count: "<< narrowing_conversion_functional << std::endl;

    //Assignment Notation.
    int bikeCount = 2;
    int truckCount = 7;
    int vehicleCount = bikeCount+truckCount;
    int narrowing_conversion_Assignment = 2.9;

     //Prints data for the Assignment Notation variables

    std::cout<<"Bike Count: "<< bikeCount << std::endl;
    std::cout<<"Truck Count: "<< truckCount << std::endl;
    std::cout<<"Vehicle Count: "<< vehicleCount << std::endl;
    std::cout<<"Narrowing Assignment Count: "<< narrowing_conversion_Assignment << std::endl;
    

    // Sizeof 

    int sizeOf;
    
    std::cout<<"size of sizeOf: "<< sizeof(sizeOf)<<std::endl;
    std::cout<<"size of bikeCount: "<< sizeof(bikeCount)<<std::endl;


    
    return 0;
}
