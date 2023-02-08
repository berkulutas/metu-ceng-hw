#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab H = Tab("s", "fff","ccc");
wind->print();
Tab O = Tab("m", "x","qq");
wind->changeActiveTabTo(0);
Tab X = Tab("o", "p","aaa");
wind->getActiveTab();
Tab R = Tab("hhh", "z","pp");
wind->print();
Tab T = Tab("vv", "pp","uu");
wind->changeActiveTabTo(3);
Tab D = Tab("g", "hh","vv");
wind->changeActiveTabTo(1);
Tab Y = Tab("ii", "bb","yyy");
wind->isEmpty();
Tab N = Tab("rr", "j","bbb");
wind->newTab(D);
Tab U = Tab("jj", "ll","bbb");
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(4);
Tab C = Tab("n", "ii","nn");
wind->newTab(C);
wind->getActiveTab();
Tab P = Tab("ttt", "p","lll");
wind->print();
Tab K = Tab("qq", "mm","rr");
wind->newTab(H);
wind->print();
Tab I = Tab("kk", "a","yyy");
wind->newTab(I);
Tab V = Tab("zzz", "y","bb");
wind->print();
wind->newTab(K);
Tab A = Tab("fff", "f","mmm");
wind->moveActiveTabTo(5);
wind->print();
wind->isEmpty();
wind->closeTab();
Tab W = Tab("aa", "jj","i");
wind->newTab(A);
wind->closeTab();
Tab Q = Tab("uuu", "z","oo");
wind->closeTab();
Tab L = Tab("vvv", "n","ttt");
wind->getActiveTab();
Tab E = Tab("vv", "p","kkk");
wind->newTab(E);
Tab Z = Tab("sss", "fff","pp");

/////
wind->print(); // boş - h - i - f - p (4)
wind->getActiveTab();
Tab M = Tab("p", "zz","g");
wind->newTab(L); // boş - h - i - f - p - n (5)
wind->getActiveTab();
Tab J = Tab("qqq", "tt","nn");
wind->changeActiveTabTo(3); // boş - h - i - f - p - n (3)
wind->newTab(J); // boş - h - i - f - t - p - n (4)
Tab F = Tab("eee", "h","qqq");
wind->isEmpty();
wind->closeTab(); // boş - h - i - f - p - n (4)
wind->closeTab(); // boş - h - i - f - n (4)
wind->moveActiveTabTo(1); // boş - n - h - i - f (1)
wind->getActiveTab();
wind->moveActiveTabTo(4); // boş - h - i - f - n (4)
wind->moveActiveTabTo(2); // boş - h - n - i - f (2)
wind->isEmpty();
wind->closeTab(); // boş - h - i - f (2)
wind->closeTab(); // boş - h - f (2)
wind->changeActiveTabTo(3); // boş - h - f (2)
wind->getActiveTab();
wind->print();

////

Tab G = Tab("k", "gg","i");
wind->changeActiveTabTo(0);
wind->newTab(F);
wind->newTab(G);
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->newTab(M);
wind->moveActiveTabTo(1);
wind->newTab(N);
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->closeTab();
wind->newTab(O);
wind->isEmpty();
Tab S = Tab("mmm", "m","rrr");
wind->print();
wind->print();
wind->closeTab();
wind->newTab(P);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(3);
Tab B = Tab("p", "ww","kk");
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->print();
wind->newTab(B);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->newTab(Q);
wind->closeTab();
wind->closeTab();
wind->newTab(R);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->print();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->newTab(S);
wind->getActiveTab();
delete wind;
}
	return 0;
};