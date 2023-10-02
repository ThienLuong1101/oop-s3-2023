#include"Invoice.h"
#include"iostream"

Invoice::Invoice(string invoiceId) {
    this->invoiceId = invoiceId;
}
void Invoice::addServiceCost(int costDollars) {
    if (costDollars > 0)
    {
        dollarsOwed = costDollars;
    }
    else
    {
        std::cout << "Accepts only positive dollar amounts." << std::endl;
    }
    
    
}
int Invoice::getDollarsOwed() {return dollarsOwed;}
string Invoice::getInvoiceId() {return invoiceId;}


