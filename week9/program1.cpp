#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

enum type {car, van, wagon};

class road_vehicle{
    int wheels = 0;
    int passengers = 0;
public:
    void set_wheels(int num) {wheels=num;}
    int get_wheels() {return wheels;}
    void set_pass(int num) {passengers=num;}
    int get_pass() {return passengers;}
};

class truck: public road_vehicle{
    int cargo = 0;
public:
    void set_cargo(int size) {cargo=size;}
    int get_cargo() {return cargo;}
};

class automobile:public road_vehicle{
    enum type car_type;
public:
    void set_type(string t) {
        if (t == "car")
            car_type = car;
        else if (t == "van")
            car_type = van;
        else if (t == "wagon")
            car_type = wagon;
    }
    enum type get_type() {
        return car_type;
    }
};

class Node{
public:
    void insert(road_vehicle *new_vehicle);
    void insert(truck *new_truck);
    void insert(automobile *new_automobile);
    void displayTruck();
    void displayAutomobile();
    //  void display(ofstream &out);
private:
    Node *next;
    road_vehicle *data;
};

void Node::insert(road_vehicle *new_vehicle){
    if(data==NULL){
        data==new_vehicle;
        return;
    }
    if(next==NULL){
        next = new Node;
        next->data == new_vehicle;
    }else{
        next->insert(new_vehicle);
    }
}

void Node::insert(truck *new_truck){
    if(data==NULL){
        data==new_truck;
        return;
    }
    if(next==NULL){
        next = new Node;
        next->data == new_truck;
    }else{
        next->insert(new_truck);
    }
}

void Node::insert(automobile *new_automobile){
    if(data==NULL){
        data==new_automobile;
        return;
    }
    if(next==NULL){
        next = new Node;
        next->data == new_automobile;
    }else{
        next->insert(new_automobile);
    }
}

void Node::displayTruck(){
    cout << "wheels: " << data->get_wheels() << "\n";
    cout << "passengers: " << data->get_pass() << "\n";
    cout << "cargo capacity in cubic feet: " << data->get_cargo() << "\n";
}

void Node::displayAutomobile(){
    cout << "wheels: " << data->get_wheels() << "\n";
    cout << "passengers: " << data->get_pass() << "\n";
    cout << "type: ";
    switch(data->get_type()){
        case van: cout << "van\n";
            break;
        case car: cout << "car\n";
            break;
        case wagon: cout << "wagon\n";
    }
}

/*
void Node::display(ofstream &out){
    cout<< "" <<endl;
    if(next != NULL){
    next->display(out);
    }
}
*/
 
int main(){
    Node *ll = new Node();
    road_vehicle *vehicle;
    truck *t = new truck;
    automobile *a = new automobile;
    string v_type = "";
    int n = 0;
    string a_type = "";
    
    for (int i = 0; i < 10; i++){
        vehicle = new road_vehicle();
        
        cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck'\n";
        cin >> v_type;
        
        cout<< "How many wheels does this vehicle have?\n";
        cin>> n;
        vehicle->set_wheels(n);
        
        cout << "How many passengers can this vehicle hold?\n";
        cin >> n;
        vehicle->set_pass(n);
        
        if (v_type == "truck"){
            cout <<"How much cargo (in pounds) can this vehicle hold?\n";
            cin >> n;
            t->set_cargo(n);
        }else if (v_type == "automobile"){
            cout <<"What type of automobile is this? Enter van, car or wagon\n";
            cin >> a_type;
            a->set_type(a_type);
        }
        ll->insert(vehicle);
    }
    
    
     if (v_type == "truck"){
         ll->displayTruck();
     }else if (v_type == "automobile"){
         ll->displayAutomobile();
     }
    
    ofstream out;
    out.open("output.txt");
    
    //ll->display(out);
    
   // outclose();
}
