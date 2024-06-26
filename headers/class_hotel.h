class Hotel{

string* customerName[100],*customerLastname[100];
int sum=0,counter1,counter2;


enum status{
 emptyRoom,
 fullRoom
}rooms[20];

public:

    Hotel();

    void roomManagement();
    void roomReservation();
    void roomEvacuation();
    void numberOfRooms();
    void roomReport();
    void income();
};
