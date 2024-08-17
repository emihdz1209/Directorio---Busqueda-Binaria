//
// Created by emili on 8/16/2024.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Empleado{
    string name;
    int edad;
    string hobby;
    string Language;
};

bool CompararNombres(const Empleado &a, const Empleado &b){
    return a.name < b.name;
}

int BinarySearch(const string &target, vector<Empleado> &empleados){
    int lo = 0;
    int hi = empleados.size() - 1;

    while(lo<=hi){
        int mid = lo+(hi-lo) /2;
        if(empleados[mid].name==target){
            return mid;
        }
        if(empleados[mid].name<target){
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    };
    return -1;
}