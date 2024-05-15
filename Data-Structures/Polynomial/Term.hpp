//
//  Term.hpp
//  Actividad3.1
//
//  Created by Carlos Surillo on 3/16/23.
//

#ifndef Term_hpp
#define Term_hpp
#include <iostream>
using namespace::std;
class Term
{
private:
    int coef;
    int exp;
public:
    Term();
    Term(int, int);
    Term(const Term&);
    ~Term();
    void setCoef(int);
    void setExp(int);
    void set(int, int);
    int getCoef() const;
    int getExp() const;
    bool operator == (const Term&) const;
    Term operator +=(const Term &);
    friend istream& operator >> (istream&, Term&);
    friend ostream& operator << (ostream&, const Term&);
    
    
};
#endif /* Term_hpp */
