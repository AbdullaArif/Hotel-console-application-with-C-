Hotel::Hotel(){
counter1=0, counter2=0;
roomManagement();
}

void Hotel::roomManagement(){
int number;
for(int i=0;i<=20;i++)
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
     delete customerLastname[];
     delete customerName[];
     default:cout<<"Wrong choice! Please choose a number between 1 and 6"<<"\n";
   }
}while(number!=6);
}

void Hotel::roomReservation(){
int number;
int numberOfDays;
int i=0,j=13;
string name,lastName;
cout<<"Please choose the room\n";
cout<<"1) 1 Person 500$\n";
cout<<"2) 2 Person 1000$\n";
cin>>number;
    switch(number){
    case 1:   for(;i<=12;i++){
            if(rooms[i]!=fullRoom){
                rooms[i]=fullRoom;
                cout<<"Enter your Name: ";
                cin>>name;
                cout<<"Enter your Surname: ";
                cin>>lastName;
                cout<<"How long will you stay? ";
                cin>>numberOfDays;
                sum+=numberOfDays*500;
                counter1++;
                customerName[i]= new string;
                *customerName[i]=name;
                 customerLastname[i]= new string;
                *customerLastname[i]=lastName;
                cout<<"Your single room reservation has been made successfully.\n";
                break;
            }
}
       if(i==12){cout<<"single rooms are full"<<"\n";}
    break;
    case 2:for(;j<=20;j++){
            if(rooms[j]!=fullRoom){
                rooms[j]=fullRoom;
                cout<<"Enter your Name: ";
                cin>>name;
                cout<<"Enter your Surname: ";
                cin>>lastName;
                cout<<"How long will you stay? ";
                cin>>numberOfDays;
                sum+=numberOfDays*1000;
                counter2++;
                customerName[j]= new string;
                *customerName[j]=name;
                 customerLastname[j]= new string;
                *customerLastname[j]=lastName;
                cout<<"Your double room reservation has been made successfully.\n";
                break;
            }
}
       if(i==20){cout<<"One and two person rooms are full"<<"\n";}

        break;
    default: cout<<"Wrong access!";
    }
}

void Hotel::roomEvacuation(){
int number;
cout<<"Enter the number of the room you want to vacate\n";
cin>>number;
if(rooms[number]==fullRoom){
    rooms[number]=emptyRoom;
    delete customerName[number];
    delete customerLastname[number];
}
if(number>0&&number<=12) counter1--;
if(number>12&&number<=20)counter2--;
}

void Hotel::numberOfRooms(){

}

void Hotel::roomReport(){

}

void Hotel::income(){

}
