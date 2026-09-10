# Object Oriented Programming (CL-1004)

## Lab 04 — Constructors, Destructors, and Static Members in C++

**University:** National University of Computer and Emerging Sciences (FAST-NUCES), Karachi  
**Semester:** Spring 2026  
**Course:** CL-1004 Object Oriented Programming

---

## Lab Overview

This lab focuses on constructors, destructors, member initialization lists, `const` data members, and static members in C++. The programs demonstrate how constructors initialize objects, destructors perform cleanup when objects are destroyed, and static members are shared among all objects of a class.

---

## Objectives

The objectives of this lab are:

- Understand the role of default and parameterized constructors.
- Implement copy constructors and overloaded constructors.
- Understand the purpose of destructors and implement them in classes.
- Use member initialization lists to initialize data members.
- Initialize `const` data members using member initialization lists.
- Understand why certain data members must be initialized in the initialization list.
- Differentiate between static and non-static (instance) data members.
- Implement static data members and static member functions.
- Understand how static data members are shared among all objects of a class.
- Understand how constructors and destructors can be used to maintain a shared object count.

---

## Topics Covered

### 1. Constructors

A constructor is a special member function that is automatically called when an object is created.

A parameterized constructor can be used to initialize an object with specific values.

```cpp
Student(string n, string r) : name(n), rollNumber(r)
{
    totalStudents++;
}
