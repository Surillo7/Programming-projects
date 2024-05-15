//
//  Contact_Info.hpp
//  contactinfo
//
//  Created by Carlos Surillo on 12/6/22.
//

#ifndef Contact_Info_hpp
#define Contact_Info_hpp

#include <cstring> // Needed for strlen and strcpy
// ContactInfo class declaration.
class ContactInfo
{
private:
    char *name; // The contact's name
    char *phone; // The contact's phone number
public:
    // Constructor
    ContactInfo(char *n, char *p);
    ContactInfo();
    // Destructor
    ~ContactInfo();
    // This function initializes the name attribute.
    void setName(char *n);
    // This function initializes the phone attribute.
    void setPhone(char *p);
    const char *getName() const;
    const char *getPhoneNumber() const;
    void display() const;
};
#endif
