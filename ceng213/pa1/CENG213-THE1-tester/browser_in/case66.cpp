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
Tab A = Tab("mm", "mmm","p");
Tab B = Tab("vvv", "qqq","sss");
Tab C = Tab("ff", "ii","ttt");
Tab D = Tab("cc", "pp","ccc");
Tab E = Tab("nnn", "nnn","bbb");
Tab F = Tab("oo", "uuu","xxx");
Tab G = Tab("g", "qqq","fff");
Tab H = Tab("f", "p","ooo");
Tab I = Tab("q", "sss","ccc");
Tab J = Tab("dd", "rrr","g");
Tab K = Tab("jjj", "a","rr");
Tab L = Tab("gg", "b","qqq");
Tab M = Tab("yyy", "lll","ddd");
Tab N = Tab("j", "hh","y");
Tab O = Tab("ooo", "nn","ss");
Tab P = Tab("yyy", "yy","lll");
Tab Q = Tab("ss", "rrr","tt");
Tab R = Tab("fff", "qqq","lll");
Tab S = Tab("f", "qq","hhh");
Tab T = Tab("xxx", "ooo","m");
Tab U = Tab("o", "iii","i");
Tab V = Tab("lll", "i","vv");
Tab W = Tab("tt", "d","aa");
Tab X = Tab("ii", "cc","xxx");
Tab Y = Tab("ss", "hh","mm");
Tab Z = Tab("uu", "k","ooo");
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(A);
a.changeActiveTabTo(5);
b.newTab(B);
c.moveActiveTabTo(5);
d.newTab(C);
a.changeActiveTabTo(1);
b.newTab(D);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.newTab(G);
d.moveActiveTabTo(5);
a.newTab(H);
b.changeActiveTabTo(2);
c.newTab(I);
d.newTab(J);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(K);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(L);
a.moveActiveTabTo(5);
b.newTab(M);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(N);
a.newTab(O);
b.newTab(P);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.newTab(Q);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(R);
b.newTab(S);
c.newTab(T);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
b.newTab(U);
c.changeActiveTabTo(4);
d.newTab(V);
a.newTab(W);
b.newTab(X);
c.newTab(Y);
d.newTab(Z);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(3);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
c.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(5);
b.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
b.moveActiveTabTo(2);
a.moveActiveTabTo(4);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
b.changeActiveTabTo(2);
a.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
b.changeActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(4);
brows->closeWindow();
brows->getWindow(7);
brows->switchToWindow(5);
brows->getWindow(7);
brows->newWindow();
brows->switchToWindow(3);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(9);
brows->closeWindow();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->getWindow(0);
brows->getWindow(5);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(2);
brows->getWindow(9);
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(7);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(7);
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->getWindow(1);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->getWindow(9);
brows->mergeAllWindows();
brows->getWindow(6);
brows->switchToWindow(4);
brows->switchToWindow(2);
brows->switchToWindow(7);
brows->getWindow(5);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->getWindow(9);
brows->closeEmptyWindows();
brows->getWindow(5);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->newWindow();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->switchToWindow(7);
brows->print();
brows->switchToWindow(3);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->getWindow(8);
delete brows;
}
	return 0;
};