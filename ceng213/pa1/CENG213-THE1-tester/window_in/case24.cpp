#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
Tab I = Tab("l", "gg","h");
wind->closeTab();
Tab P = Tab("u", "v","a");
wind->changeActiveTabTo(1);
Tab S = Tab("i", "aaa","aaa");
wind->closeTab();
Tab U = Tab("ttt", "mm","uu");
wind->closeTab();
Tab R = Tab("ccc", "jjj","ee");
wind->closeTab();
wind->isEmpty();
Tab A = Tab("ss", "f","ll");
wind->closeTab();
Tab N = Tab("l", "ppp","uuu");
wind->moveActiveTabTo(0);
Tab K = Tab("e", "ee","gg");
wind->changeActiveTabTo(1);
Tab X = Tab("ppp", "n","zz");
wind->moveActiveTabTo(0);
Tab D = Tab("oo", "ooo","hh");
wind->isEmpty();
Tab B = Tab("eee", "ttt","pp");
wind->isEmpty();
Tab H = Tab("z", "ii","bbb");
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
Tab O = Tab("tt", "ll","ss");
wind->moveActiveTabTo(5);
Tab E = Tab("k", "q","sss");
wind->isEmpty();
wind->print();
Tab W = Tab("zz", "o","a");
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(0);
Tab M = Tab("z", "kkk","t");
wind->print();
Tab C = Tab("oo", "aaa","y");
wind->newTab(A);
wind->getActiveTab();
Tab Y = Tab("mm", "sss","h");
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(0);
wind->closeTab();
Tab V = Tab("f", "jj","ss");
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(0);
Tab Q = Tab("aaa", "g","www");
wind->getActiveTab();
Tab F = Tab("ww", "jjj","tt");
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab Z = Tab("qqq", "xxx","xxx");
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->newTab(B);
wind->moveActiveTabTo(4);
wind->newTab(C);
wind->moveActiveTabTo(0);
Tab J = Tab("ww", "zz","dd");
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->print();
wind->print();
wind->newTab(D);
wind->newTab(E);
wind->closeTab();
wind->print();
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->print();
Tab T = Tab("ee", "x","yyy");
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->newTab(F);
wind->moveActiveTabTo(3);
wind->print();
wind->moveActiveTabTo(5);
Tab L = Tab("h", "aaa","f");
wind->newTab(H);
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->closeTab();
wind->print();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->newTab(I);
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
delete wind;
}
	return 0;
};