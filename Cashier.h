//
// Created by omerc on 28/12/2019.
//

#ifndef HW_4_CASHIER_H
#define HW_4_CASHIER_H

#include "Movie.h"
#include "Employee.h"
#include "Theater.h"
#include "proj.h"

class Cashier : public Employee {
public:
    Cashier(char **hours, char *name, int salary);
    int getTicketProfit();
    int sellTickets(Movie* p_movie, Theater* p_theater, BOOL dubbed, int tickets_num, int row, int col);
private:
    int ticket_profit_;
};


#endif //HW_4_CASHIER_H
