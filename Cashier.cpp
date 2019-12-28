//
// Created by omerc on 28/12/2019.
//

#include "Cashier.h"


Cashier::Cashier(char **hours, char *name, int salary) : Employee(hours, name, salary),ticket_profit_(0) {

}

int Cashier::getTicketProfit() {
    return ticket_profit_;
}

int Cashier::sellTickets(Movie *p_movie, Theater *p_theater, BOOL dubbed, int tickets_num, int row, int col) {

}
