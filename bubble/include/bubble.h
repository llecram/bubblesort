#ifndef BUBBLE_H
#define BUBBLE_H
class bubble{
    public:
    bubble();
	void _sort(int*,int*);
	bool _swap(int*,int* );
	virtual bool op(int*,int*) = 0;
};
class descendente :public bubble{
	virtual bool op(int*, int*);
};
class ascendente :public bubble{
	virtual bool op(int*, int*);
};
#endif // BUBBLE_H
