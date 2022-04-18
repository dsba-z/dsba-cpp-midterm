/*! \file       solution.h
 *  \author     ---=Put your name here=---
 *  \version    1.0
 *  \date       18.04.2022
 *
 *  Midterm Test. Types aliases and definitions, and function skeletons.
 *
 *      → Provide your solution here and upload this only file to Ya.Contest! ←
 *
 */

#include <string>
#include <iostream>
#include <set>
#include <vector>
#include <map>
// TODO: do not forget to include all necessary headers here!

// Use the following datatypes and do not modify them!
// See notes in the task description.
using Ingredients = std::map<std::string, int>;

struct Dish {
    std::string name;
    std::set<std::string> ingredients;
};

using Dishes = std::vector<Dish>;
using DishesIngredients = std::pair<Dishes&, Ingredients&>;


//=========================[TASK 1]===========================================//

Ingredients readIngredients(std::istream& istr)
{
    Ingredients res;

    // TODO: finish up with an implementation here...

    return res;
}

// This is a complete implementation. Don't modify it, use it and consider it
// as an example
Dishes readDishes(std::istream& istr)
{
    Dishes res;

    size_t num;
    istr >> num;
    for (size_t i = 0; i < num; ++i)
    {
        Dish dish;
        istr >> dish.name;
        size_t ingNum;
        istr >> ingNum;
        for (size_t j = 0; j < ingNum; ++j)
        {
            std::string ingr;
            istr >> ingr;
            dish.ingredients.insert(ingr);
        }
        res.push_back(dish);
    }

    return res;
}

//=========================[TASK 2]===========================================//

std::ostream& operator<<(std::ostream& ostr, const Dish& dish)
{

    // TODO: finish up with an implementation here...

    return ostr;
}

//=========================[TASK 3]===========================================//

int calcCalories(const Dish& dish, const Ingredients& ingrs)
{
    int total = 0;

    // TODO: finish up with an implementation here...

    return total;
}


//=========================[TASK 4]===========================================//


// This is a complete implementation. Don't modify it and consider it
// as an example.
//
// ! It is NOT mandatory to use this method in the program.
std::ostream& operator<<(std::ostream& ostr, const Dishes& dishes)
{
    for (const Dish& dish : dishes)
    {
        ostr << dish << "\n";
    }
    return ostr;
}


std::ostream& operator<<(std::ostream& ostr, const DishesIngredients& di)
{

    // TODO: finish up with an implementation here...

    return ostr;
}

//=========================[TASK 5]===========================================//

struct Comparator
{
    const Ingredients& ingrs;


    // TODO: complete the comparator definition as needed

};


void sortDishesByCalories(DishesIngredients& di)
{

    // TODO: finish up with an implementation here...

}
