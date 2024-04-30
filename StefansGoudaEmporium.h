// This is the header for Stefan's Gouda Emporium, the place of business that provides
const std::string SGE_NAME = "Stefan's Gouda Emporium";

struct Date
{
  int day;
  int year;
} Date;

struct SGE
{
  // Members!
  int employees;  // Employee Count
  Date established; // Date of Establishment
  float rating;
  int tables;  // Tabels at the restaurant
  int seats;  // Seats per table
} SGE;
