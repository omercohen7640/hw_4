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
    /*********************************************************************************
    Function name: Cashier
    Description: c'tor
    Parameters: -
    Return value: -
    **********************************************************************************/
    Cashier(char **hours, char *name, int salary);


    /*********************************************************************************
    Function name: getTicketProfit
    Description: return the the profit made by the cashier
    Parameters: -
    Return value: ticket profit
    **********************************************************************************/
    int getTicketProfit();

    /*********************************************************************************
    Function name: sellTickets
    Description: sell ticket for a movie in a given theater
    Parameters:
    p_move- pointer to wanted movie
    p_theater - pointer the a wanted theater
    dubbed- boolean value
    tickets_num- number of wanted tickets
    row- wanted row
    col - collumn of the right seat.
    Return value: -
    **********************************************************************************/
    int sellTickets(Movie* p_movie, Theater* p_theater, BOOL dubbed, int tickets_num, int row, int col);
private:
    int ticket_profit_;
};


#endif //HW_4_CASHIER_H
