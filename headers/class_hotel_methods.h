Hotel::Hotel(){
counter1=0, counter2=0;
roomManagement();
}

void Hotel::roomManagement(){
int number;
for(int i=0;i<=30;i++)
    rooms[i]=emptyRoom;
do{

    cout<<"\tWelcome to Arif Abdulla Hotel"<<"\n";
    cout<<"\t============================= "<<"\n";
    cout<<"\t1) Rezervation "<<"\n";
    cout<<"\t---------------"<<"\n";
    cout<<"\t2) Start Room  "<<"\n";
    cout<<"\t---------------"<<"\n";
    cout<<"\t3) Full Rooms  "<<"\n";
    cout<<"\t---------------"<<"\n";
    cout<<"\t4) Room Raport "<<"\n";
    cout<<"\t---------------"<<"\n";
    cout<<"\t5) Sum Income  "<<"\n";
    cout<<"\t---------------"<<"\n";
    cout<<"\t6) Exit        "<<"\n";
    cout<<"\t==============="<<"\n";
    cout<<"Please, make your choice"<<"\n";
    cin>>number;
   switch(number){
     case 1: roomReservation();break;
     case 2: roomEvacuation();break;
     case 3: numberOfRooms();break;
     case 4: roomReport();break;
     case 5: income();break;
     case 6: exit(1);break;
            default:cout<<"Wrong choice! Please choose a number between 1 and 6";
   }
}while(number!=6);
}

void Hotel::roomReservation(){

}

void Hotel::roomEvacuation(){

}

void Hotel::numberOfRooms(){

}

void Hotel::roomReport(){

}

void Hotel::income(){

}
