/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SystemParameters.hpp
 * Author: Tyler
 *
 * Created on October 18, 2016, 10:58 PM
 */

#ifndef SYSTEMPARAMETERS_HPP
#define SYSTEMPARAMETERS_HPP
#include "Types.hpp"
#include <iostream>
using namespace std;
class SystemParameters {
public:
    
    SystemParameters(const SystemParameters& orig);
    virtual ~SystemParameters();
    static SystemParameters* get_SystemParameters();
    set_parameters();
    
    //U_32 get_num_panels(void);
    //void set_num_panels(U_32 p_num_panels);
    
    //U_32 get_x_distance(void);
    //void set_x_distance(U_32 p_x_distance);
    
    //U_32 get_y_distance(void);
    //void set_y_distance(U_32 p_y_distance);
    
    //U_32 get_num_elements_x(void);
    //void set_num_elements_x(U_32 p_num_elements_x);
    
    //U_32 get_num_elements_y(void);
    //void set_num_elements_y(U_32 p_num_elements_y);
    
    //U_32 get_speed_of_sound(void);
    //void set_speed_of_sound(U_32 p_speed_of_sound);
    

    static U_32 num_panels;
    static U_Float x_distance;
    static U_Float y_distance;
    static U_32 num_elements_x;
    static U_32 num_elements_y;
    static U_Float speed_of_sound;
    static U_32 x_panels;
    static U_32 y_panels;
private:
    static bool instanceFlag;
    static SystemParameters *single;
    SystemParameters();
};

#endif /* SYSTEMPARAMETERS_HPP */

