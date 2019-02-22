// Generated from c:\Users\yuval\Desktop\Nobilis\Nobilis.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class NobilisLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		NAME=1, STRING=2, NUMBER=3, INTEGER=4, FLOAT=5, TRUE=6, FALSE=7, TYPE=8, 
		INT_TYPE=9, FLOAT_TYPE=10, BOOLEAN_TYPE=11, STRING_TYPE=12, OBJECT_TYPE=13, 
		DOT=14, STAR=15, OPEN_PAREN=16, CLOSE_PAREN=17, COMMA=18, COLON=19, SEMI_COLON=20, 
		POWER=21, ASSIGN=22, OPEN_BRACK=23, CLOSE_BRACK=24, OR_OP=25, XOR=26, 
		AND_OP=27, LEFT_SHIFT=28, RIGHT_SHIFT=29, ADD=30, MINUS=31, DIV=32, MOD=33, 
		IDIV=34, NOT_OP=35, OPEN_BRACE=36, CLOSE_BRACE=37, LESS_THAN=38, GREATER_THAN=39, 
		EQUALS=40, GT_EQ=41, LT_EQ=42, NOT_EQ=43, ARROW=44, ADD_ASSIGN=45, SUB_ASSIGN=46, 
		MULT_ASSIGN=47, AT_ASSIGN=48, DIV_ASSIGN=49, MOD_ASSIGN=50, AND_ASSIGN=51, 
		OR_ASSIGN=52, XOR_ASSIGN=53, LEFT_SHIFT_ASSIGN=54, RIGHT_SHIFT_ASSIGN=55, 
		POWER_ASSIGN=56, IDIV_ASSIGN=57, SKIP_=58;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"NAME", "STRING", "NUMBER", "INTEGER", "FLOAT", "TRUE", "FALSE", "TYPE", 
		"INT_TYPE", "FLOAT_TYPE", "BOOLEAN_TYPE", "STRING_TYPE", "OBJECT_TYPE", 
		"DOT", "STAR", "OPEN_PAREN", "CLOSE_PAREN", "COMMA", "COLON", "SEMI_COLON", 
		"POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", "OR_OP", "XOR", "AND_OP", 
		"LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", "DIV", "MOD", "IDIV", "NOT_OP", 
		"OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", "GREATER_THAN", "EQUALS", "GT_EQ", 
		"LT_EQ", "NOT_EQ", "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", 
		"AT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
		"LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "POWER_ASSIGN", "IDIV_ASSIGN", 
		"SKIP_", "SPACES", "COMMENT", "LINE_JOINING", "ESC", "ESC_SINGLE"
	};

	private static final String[] _LITERAL_NAMES = {
		null, null, null, null, null, null, "'true'", "'false'", null, "'integer'", 
		"'float'", "'boolean'", "'string'", "'object'", "'.'", "'*'", "'('", "')'", 
		"','", "':'", "';'", "'**'", "'='", "'['", "']'", "'|'", "'^'", "'&'", 
		"'<<'", "'>>'", "'+'", "'-'", "'/'", "'%'", "'//'", "'~'", "'{'", "'}'", 
		"'<'", "'>'", "'=='", "'>='", "'<='", "'!='", "'->'", "'+='", "'-='", 
		"'*='", "'@='", "'/='", "'%='", "'&='", "'|='", "'^='", "'<<='", "'>>='", 
		"'**='", "'//='"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "NAME", "STRING", "NUMBER", "INTEGER", "FLOAT", "TRUE", "FALSE", 
		"TYPE", "INT_TYPE", "FLOAT_TYPE", "BOOLEAN_TYPE", "STRING_TYPE", "OBJECT_TYPE", 
		"DOT", "STAR", "OPEN_PAREN", "CLOSE_PAREN", "COMMA", "COLON", "SEMI_COLON", 
		"POWER", "ASSIGN", "OPEN_BRACK", "CLOSE_BRACK", "OR_OP", "XOR", "AND_OP", 
		"LEFT_SHIFT", "RIGHT_SHIFT", "ADD", "MINUS", "DIV", "MOD", "IDIV", "NOT_OP", 
		"OPEN_BRACE", "CLOSE_BRACE", "LESS_THAN", "GREATER_THAN", "EQUALS", "GT_EQ", 
		"LT_EQ", "NOT_EQ", "ARROW", "ADD_ASSIGN", "SUB_ASSIGN", "MULT_ASSIGN", 
		"AT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN", "OR_ASSIGN", "XOR_ASSIGN", 
		"LEFT_SHIFT_ASSIGN", "RIGHT_SHIFT_ASSIGN", "POWER_ASSIGN", "IDIV_ASSIGN", 
		"SKIP_"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	private:
		int opened ;


	public NobilisLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Nobilis.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	@Override
	public void action(RuleContext _localctx, int ruleIndex, int actionIndex) {
		switch (ruleIndex) {
		case 15:
			OPEN_PAREN_action((RuleContext)_localctx, actionIndex);
			break;
		case 16:
			CLOSE_PAREN_action((RuleContext)_localctx, actionIndex);
			break;
		case 22:
			OPEN_BRACK_action((RuleContext)_localctx, actionIndex);
			break;
		case 23:
			CLOSE_BRACK_action((RuleContext)_localctx, actionIndex);
			break;
		case 35:
			OPEN_BRACE_action((RuleContext)_localctx, actionIndex);
			break;
		case 36:
			CLOSE_BRACE_action((RuleContext)_localctx, actionIndex);
			break;
		}
	}
	private void OPEN_PAREN_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 0:
			opened++;
			break;
		}
	}
	private void CLOSE_PAREN_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 1:
			opened--;
			break;
		}
	}
	private void OPEN_BRACK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 2:
			opened++;
			break;
		}
	}
	private void CLOSE_BRACK_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 3:
			opened--;
			break;
		}
	}
	private void OPEN_BRACE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 4:
			opened++;
			break;
		}
	}
	private void CLOSE_BRACE_action(RuleContext _localctx, int actionIndex) {
		switch (actionIndex) {
		case 5:
			opened--;
			break;
		}
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2<\u0184\b\1\4\2\t"+
		"\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t+\4"+
		",\t,\4-\t-\4.\t.\4/\t/\4\60\t\60\4\61\t\61\4\62\t\62\4\63\t\63\4\64\t"+
		"\64\4\65\t\65\4\66\t\66\4\67\t\67\48\t8\49\t9\4:\t:\4;\t;\4<\t<\4=\t="+
		"\4>\t>\4?\t?\4@\t@\3\2\3\2\7\2\u0084\n\2\f\2\16\2\u0087\13\2\3\3\3\3\3"+
		"\3\7\3\u008c\n\3\f\3\16\3\u008f\13\3\3\3\3\3\3\3\3\3\7\3\u0095\n\3\f\3"+
		"\16\3\u0098\13\3\3\3\5\3\u009b\n\3\3\4\3\4\5\4\u009f\n\4\3\5\6\5\u00a2"+
		"\n\5\r\5\16\5\u00a3\3\6\5\6\u00a7\n\6\3\6\3\6\5\6\u00ab\n\6\3\7\3\7\3"+
		"\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\5\t\u00bd\n\t\3"+
		"\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\13\3\13\3\13\3\13\3\f\3\f\3"+
		"\f\3\f\3\f\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16"+
		"\3\16\3\16\3\16\3\17\3\17\3\20\3\20\3\21\3\21\3\21\3\22\3\22\3\22\3\23"+
		"\3\23\3\24\3\24\3\25\3\25\3\26\3\26\3\26\3\27\3\27\3\30\3\30\3\30\3\31"+
		"\3\31\3\31\3\32\3\32\3\33\3\33\3\34\3\34\3\35\3\35\3\35\3\36\3\36\3\36"+
		"\3\37\3\37\3 \3 \3!\3!\3\"\3\"\3#\3#\3#\3$\3$\3%\3%\3%\3&\3&\3&\3\'\3"+
		"\'\3(\3(\3)\3)\3)\3*\3*\3*\3+\3+\3+\3,\3,\3,\3-\3-\3-\3.\3.\3.\3/\3/\3"+
		"/\3\60\3\60\3\60\3\61\3\61\3\61\3\62\3\62\3\62\3\63\3\63\3\63\3\64\3\64"+
		"\3\64\3\65\3\65\3\65\3\66\3\66\3\66\3\67\3\67\3\67\3\67\38\38\38\38\3"+
		"9\39\39\39\3:\3:\3:\3:\3;\3;\3;\5;\u015e\n;\3;\3;\3<\6<\u0163\n<\r<\16"+
		"<\u0164\3=\3=\7=\u0169\n=\f=\16=\u016c\13=\3>\3>\5>\u0170\n>\3>\5>\u0173"+
		"\n>\3>\3>\5>\u0177\n>\3?\3?\3?\3?\5?\u017d\n?\3@\3@\3@\3@\5@\u0183\n@"+
		"\4\u008d\u0096\2A\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31"+
		"\16\33\17\35\20\37\21!\22#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65"+
		"\34\67\359\36;\37= ?!A\"C#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60_\61a\62c\63e\64"+
		"g\65i\66k\67m8o9q:s;u<w\2y\2{\2}\2\177\2\3\2\7\5\2C\\aac|\6\2\62;C\\a"+
		"ac|\3\2\62;\4\2\13\13\"\"\4\2\f\f\16\17\2\u0195\2\3\3\2\2\2\2\5\3\2\2"+
		"\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21"+
		"\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2"+
		"\2\2\2\35\3\2\2\2\2\37\3\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3"+
		"\2\2\2\2)\3\2\2\2\2+\3\2\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3"+
		"\2\2\2\2\65\3\2\2\2\2\67\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3"+
		"\2\2\2\2A\3\2\2\2\2C\3\2\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2"+
		"\2\2M\3\2\2\2\2O\3\2\2\2\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2"+
		"Y\3\2\2\2\2[\3\2\2\2\2]\3\2\2\2\2_\3\2\2\2\2a\3\2\2\2\2c\3\2\2\2\2e\3"+
		"\2\2\2\2g\3\2\2\2\2i\3\2\2\2\2k\3\2\2\2\2m\3\2\2\2\2o\3\2\2\2\2q\3\2\2"+
		"\2\2s\3\2\2\2\2u\3\2\2\2\3\u0081\3\2\2\2\5\u009a\3\2\2\2\7\u009e\3\2\2"+
		"\2\t\u00a1\3\2\2\2\13\u00a6\3\2\2\2\r\u00ac\3\2\2\2\17\u00b1\3\2\2\2\21"+
		"\u00bc\3\2\2\2\23\u00be\3\2\2\2\25\u00c6\3\2\2\2\27\u00cc\3\2\2\2\31\u00d4"+
		"\3\2\2\2\33\u00db\3\2\2\2\35\u00e2\3\2\2\2\37\u00e4\3\2\2\2!\u00e6\3\2"+
		"\2\2#\u00e9\3\2\2\2%\u00ec\3\2\2\2\'\u00ee\3\2\2\2)\u00f0\3\2\2\2+\u00f2"+
		"\3\2\2\2-\u00f5\3\2\2\2/\u00f7\3\2\2\2\61\u00fa\3\2\2\2\63\u00fd\3\2\2"+
		"\2\65\u00ff\3\2\2\2\67\u0101\3\2\2\29\u0103\3\2\2\2;\u0106\3\2\2\2=\u0109"+
		"\3\2\2\2?\u010b\3\2\2\2A\u010d\3\2\2\2C\u010f\3\2\2\2E\u0111\3\2\2\2G"+
		"\u0114\3\2\2\2I\u0116\3\2\2\2K\u0119\3\2\2\2M\u011c\3\2\2\2O\u011e\3\2"+
		"\2\2Q\u0120\3\2\2\2S\u0123\3\2\2\2U\u0126\3\2\2\2W\u0129\3\2\2\2Y\u012c"+
		"\3\2\2\2[\u012f\3\2\2\2]\u0132\3\2\2\2_\u0135\3\2\2\2a\u0138\3\2\2\2c"+
		"\u013b\3\2\2\2e\u013e\3\2\2\2g\u0141\3\2\2\2i\u0144\3\2\2\2k\u0147\3\2"+
		"\2\2m\u014a\3\2\2\2o\u014e\3\2\2\2q\u0152\3\2\2\2s\u0156\3\2\2\2u\u015d"+
		"\3\2\2\2w\u0162\3\2\2\2y\u0166\3\2\2\2{\u016d\3\2\2\2}\u017c\3\2\2\2\177"+
		"\u0182\3\2\2\2\u0081\u0085\t\2\2\2\u0082\u0084\t\3\2\2\u0083\u0082\3\2"+
		"\2\2\u0084\u0087\3\2\2\2\u0085\u0083\3\2\2\2\u0085\u0086\3\2\2\2\u0086"+
		"\4\3\2\2\2\u0087\u0085\3\2\2\2\u0088\u008d\7$\2\2\u0089\u008c\5}?\2\u008a"+
		"\u008c\13\2\2\2\u008b\u0089\3\2\2\2\u008b\u008a\3\2\2\2\u008c\u008f\3"+
		"\2\2\2\u008d\u008e\3\2\2\2\u008d\u008b\3\2\2\2\u008e\u0090\3\2\2\2\u008f"+
		"\u008d\3\2\2\2\u0090\u009b\7$\2\2\u0091\u0096\7)\2\2\u0092\u0095\5\177"+
		"@\2\u0093\u0095\13\2\2\2\u0094\u0092\3\2\2\2\u0094\u0093\3\2\2\2\u0095"+
		"\u0098\3\2\2\2\u0096\u0097\3\2\2\2\u0096\u0094\3\2\2\2\u0097\u0099\3\2"+
		"\2\2\u0098\u0096\3\2\2\2\u0099\u009b\7)\2\2\u009a\u0088\3\2\2\2\u009a"+
		"\u0091\3\2\2\2\u009b\6\3\2\2\2\u009c\u009f\5\t\5\2\u009d\u009f\5\13\6"+
		"\2\u009e\u009c\3\2\2\2\u009e\u009d\3\2\2\2\u009f\b\3\2\2\2\u00a0\u00a2"+
		"\t\4\2\2\u00a1\u00a0\3\2\2\2\u00a2\u00a3\3\2\2\2\u00a3\u00a1\3\2\2\2\u00a3"+
		"\u00a4\3\2\2\2\u00a4\n\3\2\2\2\u00a5\u00a7\5\t\5\2\u00a6\u00a5\3\2\2\2"+
		"\u00a6\u00a7\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00aa\7\60\2\2\u00a9\u00ab"+
		"\5\t\5\2\u00aa\u00a9\3\2\2\2\u00aa\u00ab\3\2\2\2\u00ab\f\3\2\2\2\u00ac"+
		"\u00ad\7v\2\2\u00ad\u00ae\7t\2\2\u00ae\u00af\7w\2\2\u00af\u00b0\7g\2\2"+
		"\u00b0\16\3\2\2\2\u00b1\u00b2\7h\2\2\u00b2\u00b3\7c\2\2\u00b3\u00b4\7"+
		"n\2\2\u00b4\u00b5\7u\2\2\u00b5\u00b6\7g\2\2\u00b6\20\3\2\2\2\u00b7\u00bd"+
		"\5\23\n\2\u00b8\u00bd\5\25\13\2\u00b9\u00bd\5\27\f\2\u00ba\u00bd\5\31"+
		"\r\2\u00bb\u00bd\5\33\16\2\u00bc\u00b7\3\2\2\2\u00bc\u00b8\3\2\2\2\u00bc"+
		"\u00b9\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bc\u00bb\3\2\2\2\u00bd\22\3\2\2"+
		"\2\u00be\u00bf\7k\2\2\u00bf\u00c0\7p\2\2\u00c0\u00c1\7v\2\2\u00c1\u00c2"+
		"\7g\2\2\u00c2\u00c3\7i\2\2\u00c3\u00c4\7g\2\2\u00c4\u00c5\7t\2\2\u00c5"+
		"\24\3\2\2\2\u00c6\u00c7\7h\2\2\u00c7\u00c8\7n\2\2\u00c8\u00c9\7q\2\2\u00c9"+
		"\u00ca\7c\2\2\u00ca\u00cb\7v\2\2\u00cb\26\3\2\2\2\u00cc\u00cd\7d\2\2\u00cd"+
		"\u00ce\7q\2\2\u00ce\u00cf\7q\2\2\u00cf\u00d0\7n\2\2\u00d0\u00d1\7g\2\2"+
		"\u00d1\u00d2\7c\2\2\u00d2\u00d3\7p\2\2\u00d3\30\3\2\2\2\u00d4\u00d5\7"+
		"u\2\2\u00d5\u00d6\7v\2\2\u00d6\u00d7\7t\2\2\u00d7\u00d8\7k\2\2\u00d8\u00d9"+
		"\7p\2\2\u00d9\u00da\7i\2\2\u00da\32\3\2\2\2\u00db\u00dc\7q\2\2\u00dc\u00dd"+
		"\7d\2\2\u00dd\u00de\7l\2\2\u00de\u00df\7g\2\2\u00df\u00e0\7e\2\2\u00e0"+
		"\u00e1\7v\2\2\u00e1\34\3\2\2\2\u00e2\u00e3\7\60\2\2\u00e3\36\3\2\2\2\u00e4"+
		"\u00e5\7,\2\2\u00e5 \3\2\2\2\u00e6\u00e7\7*\2\2\u00e7\u00e8\b\21\2\2\u00e8"+
		"\"\3\2\2\2\u00e9\u00ea\7+\2\2\u00ea\u00eb\b\22\3\2\u00eb$\3\2\2\2\u00ec"+
		"\u00ed\7.\2\2\u00ed&\3\2\2\2\u00ee\u00ef\7<\2\2\u00ef(\3\2\2\2\u00f0\u00f1"+
		"\7=\2\2\u00f1*\3\2\2\2\u00f2\u00f3\7,\2\2\u00f3\u00f4\7,\2\2\u00f4,\3"+
		"\2\2\2\u00f5\u00f6\7?\2\2\u00f6.\3\2\2\2\u00f7\u00f8\7]\2\2\u00f8\u00f9"+
		"\b\30\4\2\u00f9\60\3\2\2\2\u00fa\u00fb\7_\2\2\u00fb\u00fc\b\31\5\2\u00fc"+
		"\62\3\2\2\2\u00fd\u00fe\7~\2\2\u00fe\64\3\2\2\2\u00ff\u0100\7`\2\2\u0100"+
		"\66\3\2\2\2\u0101\u0102\7(\2\2\u01028\3\2\2\2\u0103\u0104\7>\2\2\u0104"+
		"\u0105\7>\2\2\u0105:\3\2\2\2\u0106\u0107\7@\2\2\u0107\u0108\7@\2\2\u0108"+
		"<\3\2\2\2\u0109\u010a\7-\2\2\u010a>\3\2\2\2\u010b\u010c\7/\2\2\u010c@"+
		"\3\2\2\2\u010d\u010e\7\61\2\2\u010eB\3\2\2\2\u010f\u0110\7\'\2\2\u0110"+
		"D\3\2\2\2\u0111\u0112\7\61\2\2\u0112\u0113\7\61\2\2\u0113F\3\2\2\2\u0114"+
		"\u0115\7\u0080\2\2\u0115H\3\2\2\2\u0116\u0117\7}\2\2\u0117\u0118\b%\6"+
		"\2\u0118J\3\2\2\2\u0119\u011a\7\177\2\2\u011a\u011b\b&\7\2\u011bL\3\2"+
		"\2\2\u011c\u011d\7>\2\2\u011dN\3\2\2\2\u011e\u011f\7@\2\2\u011fP\3\2\2"+
		"\2\u0120\u0121\7?\2\2\u0121\u0122\7?\2\2\u0122R\3\2\2\2\u0123\u0124\7"+
		"@\2\2\u0124\u0125\7?\2\2\u0125T\3\2\2\2\u0126\u0127\7>\2\2\u0127\u0128"+
		"\7?\2\2\u0128V\3\2\2\2\u0129\u012a\7#\2\2\u012a\u012b\7?\2\2\u012bX\3"+
		"\2\2\2\u012c\u012d\7/\2\2\u012d\u012e\7@\2\2\u012eZ\3\2\2\2\u012f\u0130"+
		"\7-\2\2\u0130\u0131\7?\2\2\u0131\\\3\2\2\2\u0132\u0133\7/\2\2\u0133\u0134"+
		"\7?\2\2\u0134^\3\2\2\2\u0135\u0136\7,\2\2\u0136\u0137\7?\2\2\u0137`\3"+
		"\2\2\2\u0138\u0139\7B\2\2\u0139\u013a\7?\2\2\u013ab\3\2\2\2\u013b\u013c"+
		"\7\61\2\2\u013c\u013d\7?\2\2\u013dd\3\2\2\2\u013e\u013f\7\'\2\2\u013f"+
		"\u0140\7?\2\2\u0140f\3\2\2\2\u0141\u0142\7(\2\2\u0142\u0143\7?\2\2\u0143"+
		"h\3\2\2\2\u0144\u0145\7~\2\2\u0145\u0146\7?\2\2\u0146j\3\2\2\2\u0147\u0148"+
		"\7`\2\2\u0148\u0149\7?\2\2\u0149l\3\2\2\2\u014a\u014b\7>\2\2\u014b\u014c"+
		"\7>\2\2\u014c\u014d\7?\2\2\u014dn\3\2\2\2\u014e\u014f\7@\2\2\u014f\u0150"+
		"\7@\2\2\u0150\u0151\7?\2\2\u0151p\3\2\2\2\u0152\u0153\7,\2\2\u0153\u0154"+
		"\7,\2\2\u0154\u0155\7?\2\2\u0155r\3\2\2\2\u0156\u0157\7\61\2\2\u0157\u0158"+
		"\7\61\2\2\u0158\u0159\7?\2\2\u0159t\3\2\2\2\u015a\u015e\5w<\2\u015b\u015e"+
		"\5y=\2\u015c\u015e\5{>\2\u015d\u015a\3\2\2\2\u015d\u015b\3\2\2\2\u015d"+
		"\u015c\3\2\2\2\u015e\u015f\3\2\2\2\u015f\u0160\b;\b\2\u0160v\3\2\2\2\u0161"+
		"\u0163\t\5\2\2\u0162\u0161\3\2\2\2\u0163\u0164\3\2\2\2\u0164\u0162\3\2"+
		"\2\2\u0164\u0165\3\2\2\2\u0165x\3\2\2\2\u0166\u016a\7%\2\2\u0167\u0169"+
		"\n\6\2\2\u0168\u0167\3\2\2\2\u0169\u016c\3\2\2\2\u016a\u0168\3\2\2\2\u016a"+
		"\u016b\3\2\2\2\u016bz\3\2\2\2\u016c\u016a\3\2\2\2\u016d\u016f\7^\2\2\u016e"+
		"\u0170\5w<\2\u016f\u016e\3\2\2\2\u016f\u0170\3\2\2\2\u0170\u0176\3\2\2"+
		"\2\u0171\u0173\7\17\2\2\u0172\u0171\3\2\2\2\u0172\u0173\3\2\2\2\u0173"+
		"\u0174\3\2\2\2\u0174\u0177\7\f\2\2\u0175\u0177\4\16\17\2\u0176\u0172\3"+
		"\2\2\2\u0176\u0175\3\2\2\2\u0177|\3\2\2\2\u0178\u0179\7^\2\2\u0179\u017d"+
		"\7$\2\2\u017a\u017b\7^\2\2\u017b\u017d\7^\2\2\u017c\u0178\3\2\2\2\u017c"+
		"\u017a\3\2\2\2\u017d~\3\2\2\2\u017e\u017f\7^\2\2\u017f\u0183\7)\2\2\u0180"+
		"\u0181\7^\2\2\u0181\u0183\7^\2\2\u0182\u017e\3\2\2\2\u0182\u0180\3\2\2"+
		"\2\u0183\u0080\3\2\2\2\26\2\u0085\u008b\u008d\u0094\u0096\u009a\u009e"+
		"\u00a3\u00a6\u00aa\u00bc\u015d\u0164\u016a\u016f\u0172\u0176\u017c\u0182"+
		"\t\3\21\2\3\22\3\3\30\4\3\31\5\3%\6\3&\7\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}