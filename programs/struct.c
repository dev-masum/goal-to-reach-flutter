#include <stdio.h>

typedef union TicketResult TicketInfo;
typedef unsigned int uint;

union TicketResult
{
    int ticketNo;
    char error;
};

TicketInfo createTicket()
{
    // do some work

    TicketInfo ticket;

    ticket.error = 'A';

    return ticket;
}

int main()
{

    TicketInfo myTicket = createTicket();

    uint rollOfAsad = 10;
    uint rollOfMahmud = 11;
    uint rollOfArif = 12;
    uint rollOfSaikat = 13;

    printf("Error occured : %c\n", myTicket.error);
    printf("Error occured : %d\n", myTicket.ticketNo);

    return 0;
}
