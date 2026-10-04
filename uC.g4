grammar uC;

retstat : 'return' expr ';' ;

expr : expr '+' expr # add
      | 