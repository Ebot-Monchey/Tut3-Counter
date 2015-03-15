#ifndef UPDOWNCOUNTER_H
#define UPDOWNCOUNTER_H
	class UpDownCounter {
	private:
		int maxV;		// Stores the maximum value that the counter can hold
		int minV;		// The minimum value that the counter can hold
		int incr;		// The step of the increment
		int decr;		// The step of the decrement
		int value;		// The value of the counter
	public:
		UpDownCounter();
		UpDownCounter(int minV, int maxV, int incr, int decr);
		int getValue();
		void operator++();
		void operator++(int dummy);
		void operator--();
		void operator--(int dummy);
	};
#endif