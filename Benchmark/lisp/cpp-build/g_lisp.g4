grammar g_lisp;
start: sexpression EOF;
sexpression : atomicsymbol
               | '(' sexpression EMPTY '.' EMPTY sexpression ')'
               | list;
list : '(' sexpression (EMPTY sexpression)* ')';
atomicsymbol : LETTER | LETTER atompart;
atompart :  LETTER | NUMBER | LETTER atompart | NUMBER atompart;
LETTER : 'a'..'z';
NUMBER : '0'..'9';
EMPTY : ' ';