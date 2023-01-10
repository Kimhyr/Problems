using Int = int;
using Nat64 = unsigned long int;

template<typename Type_T, typename ...Args_T>
Type_T create(Args_T args);


struct Coordinate {
    Nat64 row;
    Nat64 column;
}

Coordinate create(Nat64 row, Nat64 column) {
    return {
        .row = row,
        .column = column,
    };
}

Int main() {
    Coordinate coord = create(1, 2);
    return 0;
}

