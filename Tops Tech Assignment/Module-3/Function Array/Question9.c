// 9. WAP to show difference between Structure and Union.

/* Structure (struct)

Definition: A structure is a user-defined data type that allows grouping of variables (of different data types) 
under a single name.

Memory Allocation: Each member of a structure has its own memory location. 
The size of a structure is the sum of the sizes of its members (including any padding for alignment).

Usage: Use structures when you need to store and access multiple pieces of data simultaneously

struct Person {
    char name[50];
    int age;
    float height;
};

Union (union)

Definition: A union is a user-defined data type that allows storing different data types in the same memory location.
Only one member can hold a value at a time.

Memory Allocation: All members of a union share the same memory location.
The size of a union is the size of its largest member.

Usage: Use unions when you need to store different data types but only one type at a time,
and you want to save memory.

union Data {
    int i;
    float f;
    char c;
};

Summary

Structure: Stores all members in separate memory locations; size is the sum of sizes of all members.

Union: Shares memory for all members; size is the size of the largest member. */