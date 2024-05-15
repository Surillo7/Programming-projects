//
//  GradedActivity.hpp
//  Actividad9-2
//
//  Created by Carlos Surillo on 1/30/23.
//

#ifndef GradedActivity_hpp
#define GradedActivity_hpp


class GradedActivity
{

protected:
    double score;
public:
    
    GradedActivity();
    GradedActivity(double s);
    ~GradedActivity();
    void setScore(double s);
    double getScore() const;
    char getLetterGrade() const;
};
#endif /* GradedActivity_hpp */
