#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("jj", "aa","y");
Tab B = Tab("ss", "i","l");
Tab C = Tab("y", "ll","qq");
Tab D = Tab("rr", "vvv","www");
Tab E = Tab("rrr", "aa","x");
Tab F = Tab("q", "e","zz");
Tab G = Tab("e", "u","hh");
Tab H = Tab("v", "ooo","j");
Tab I = Tab("q", "ooo","yyy");
Tab J = Tab("ooo", "qqq","iii");
Tab K = Tab("vv", "lll","ccc");
Tab L = Tab("iii", "xxx","fff");
Tab M = Tab("jjj", "b","b");
Tab N = Tab("ii", "eee","aa");
Tab O = Tab("tt", "h","bbb");
Tab P = Tab("i", "uu","aa");
Tab Q = Tab("yy", "iii","bbb");
Tab R = Tab("r", "gg","y");
Tab S = Tab("m", "ll","hhh");
Tab T = Tab("h", "gg","cc");
Tab U = Tab("vvv", "www","fff");
Tab V = Tab("qqq", "iii","rrr");
Tab W = Tab("aa", "ccc","zz");
Tab X = Tab("aa", "w","bbb");
Tab Y = Tab("hh", "j","o");
Tab Z = Tab("o", "iii","qq");
a.moveActiveTabTo(5);
b.newTab(A);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(B);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(C);
b.moveActiveTabTo(1);
c.newTab(D);
d.newTab(E);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(F);
d.moveActiveTabTo(2);
a.newTab(G);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(H);
d.newTab(I);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(J);
d.newTab(K);
a.newTab(L);
b.newTab(M);
c.newTab(N);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(O);
b.newTab(P);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.newTab(Q);
c.newTab(R);
d.newTab(S);
a.newTab(T);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(U);
a.newTab(V);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(W);
a.newTab(X);
b.newTab(Y);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.newTab(Z);
c.newTab(Z);
d.newTab(Z);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(5);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(1);
a.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
b.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
d.changeActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(0);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->print();
brows->closeWindow();
brows->switchToWindow(5);
brows->getWindow(5);
brows->getWindow(9);
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->getWindow(3);
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(8);
brows->getWindow(7);
brows->newWindow();
brows->getWindow(1);
brows->closeWindow();
brows->getWindow(9);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->getWindow(7);
brows->getWindow(1);
brows->getWindow(8);
brows->mergeAllWindows();
brows->print();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(2);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->getWindow(6);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(2);
brows->getWindow(6);
brows->closeWindow();
brows->switchToWindow(2);
brows->getWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(7);
brows->mergeAllWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(1);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->getWindow(1);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->closeWindow();
brows->getWindow(8);
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->getWindow(0);
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeWindow();
brows->getWindow(6);
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->getWindow(0);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->closeWindow();
delete brows;
}
	return 0;
};