#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab N = Tab("b", "xx","m");
wind->getActiveTab();
Tab V = Tab("qq", "mm","aaa");
wind->moveActiveTabTo(3);
Tab D = Tab("s", "y","k");
wind->print();
Tab T = Tab("hhh", "oo","pp");
wind->changeActiveTabTo(3);
Tab R = Tab("pp", "kk","yy");
wind->newTab(D);
wind->newTab(N);
Tab Z = Tab("iii", "e","yyy");
wind->moveActiveTabTo(0);
Tab F = Tab("www", "tt","r");
wind->changeActiveTabTo(4);
Tab P = Tab("zz", "oo","eee");
wind->moveActiveTabTo(4);
Tab A = Tab("mmm", "l","kkk");
wind->changeActiveTabTo(0);
wind->newTab(A);
Tab O = Tab("g", "mm","q");
wind->closeTab();
Tab K = Tab("jjj", "tt","nnn");
wind->closeTab();
wind->closeTab();
Tab U = Tab("a", "mm","y");
wind->newTab(F);
wind->print();
wind->closeTab();
Tab J = Tab("zz", "x","oo");
wind->changeActiveTabTo(2);
Tab L = Tab("zz", "m","rrr");
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->print();
Tab H = Tab("k", "h","q");
wind->getActiveTab();
Tab S = Tab("ww", "n","ddd");
wind->closeTab();
Tab B = Tab("lll", "www","ttt");
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(4);
Tab X = Tab("mmm", "bb","uu");
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(0);
Tab Q = Tab("nn", "c","uu");
wind->print();
wind->getActiveTab();
wind->newTab(B);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->print();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->print();
Tab I = Tab("l", "ii","d");
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->print();
wind->closeTab();
Tab W = Tab("ss", "ttt","ss");
wind->isEmpty();
wind->print();
wind->closeTab();
Tab G = Tab("uu", "kk","fff");
wind->closeTab();
wind->isEmpty();
Tab E = Tab("y", "pp","iii");
wind->print();
Tab M = Tab("oo", "oo","p");
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
Tab C = Tab("g", "hh","u");
wind->moveActiveTabTo(1);
wind->newTab(C);
wind->changeActiveTabTo(5);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->newTab(E);
wind->moveActiveTabTo(0);
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->isEmpty();
delete wind;
}
	return 0;
};