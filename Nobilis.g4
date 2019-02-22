grammar Nobilis;






/*
 * parser rules
 */


stmt				:	function_declare | expr												;
function_declare	:	declare_stmt parameters												;
expr				:	  power_expr 
						| muldivmod_expr
						| arith_expr 
						| paren_expr 
						| unary_expr 
						| atom	
						;
power_expr			:	expr (op=('**')) expr												;
muldivmod_expr		:	expr (op=('*'|'/'|'//'|'%')) expr									;
arith_expr			:	expr (op=('+'|'-')) expr											;
paren_expr			:	'(' expr ')'														;
unary_expr			:	(op=('+'|'-'))(paren_expr | unary_expr | atom)						;
atom				:	NAME | STRING | NUMBER | TRUE | FALSE								;
declare_stmt		:	('integer' | 'float' | 'boolean' | 'string' | 'object') ':' NAME	;										;
parameters			:	'(' ((declare_stmt ',')* declare_stmt)?  ')'						;
/*
* lexer rules
*/
NAME : [_A-Za-z][\w\d_]*;
STRING : (\"(\\.|[^"\\])*\")|(['](\\.|[^"\\])*[']);
NUMBER : INTEGER | FLOAT;
INTEGER : \d+;
FLOAT : (INTEGER)? '.' (INTEGER)?;
TRUE : 'true';
FALSE : 'false';
TYPE : (INT_TYPE | FLOAT_TYPE | BOOLEAN_TYPE | STRING_TYPE | OBJECT_TYPE);
INT_TYPE : 'integer';
FLOAT_TYPE : 'float';
BOOLEAN_TYPE : 'boolean';
STRING_TYPE : 'string';
OBJECT_TYPE : 'object';


DOT : '.';
STAR : '*';
OPEN_PAREN : '(' { opened++; };
CLOSE_PAREN : ')' { opened--; };
COMMA : ',';
COLON : ':';
SEMI_COLON : ';';
POWER : '**';
ASSIGN : '=';
OPEN_BRACK : '[' { opened++; };
CLOSE_BRACK : ']' { opened--; };
OR_OP : '|';
XOR : '^';
AND_OP : '&';
LEFT_SHIFT : '<<';
RIGHT_SHIFT : '>>';
ADD : '+';
MINUS : '-';
DIV : '/';
MOD : '%';
IDIV : '//';
NOT_OP : '~';
OPEN_BRACE : '{' { opened++; };
CLOSE_BRACE : '}' { opened--; };
LESS_THAN : '<';
GREATER_THAN : '>';
EQUALS : '==';
GT_EQ : '>=';
LT_EQ : '<=';
NOT_EQ : '!=';
ARROW : '->';
ADD_ASSIGN : '+=';
SUB_ASSIGN : '-=';
MULT_ASSIGN : '*=';
AT_ASSIGN : '@=';
DIV_ASSIGN : '/=';
MOD_ASSIGN : '%=';
AND_ASSIGN : '&=';
OR_ASSIGN : '|=';
XOR_ASSIGN : '^=';
LEFT_SHIFT_ASSIGN : '<<=';
RIGHT_SHIFT_ASSIGN : '>>=';
POWER_ASSIGN : '**=';
IDIV_ASSIGN : '//=';

SKIP_ : (SPACES | COMMENT | LINE_JOINING) -> skip;


fragment SPACES
 : [ \t]+
 ;

fragment COMMENT
 : '#' ~[\r\n\f]*
 ;

fragment LINE_JOINING
 : '\\' SPACES? ( '\r'? '\n' | '\r' | '\f')
 ;



