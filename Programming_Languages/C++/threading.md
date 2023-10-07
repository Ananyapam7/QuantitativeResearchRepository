# Threading in C++

Threading allows programs to run concurrently, making optimal use of available CPU cores. C++ provides extensive support for multithreading via the `<thread>` header.

## 1. Basic Threading

### Starting a Thread

```cpp
#include <thread>

void function_name() {
    // code
}

int main() {
    std::thread t1(function_name);  // Start a thread that runs function_name
    t1.join();  // Wait for the thread to finish
}
```

- `std::thread` constructs a new thread.
- `join()` waits for the thread to finish its task.

### Passing Arguments to Threads

```cpp
void function_name(int x) {
    // code using x
}

int main() {
    int value = 5;
    std::thread t1(function_name, value);  
    t1.join();  
}
```

## 2. Mutex (Mutual Exclusion)

A mutex provides mutual exclusion, allowing only one thread to access the shared data at a time.

```cpp
#include <mutex>

std::mutex mtx;  // Mutex for mutual exclusion

void function_name() {
    mtx.lock();
    // critical section
    mtx.unlock();
}

// or using lock_guard

void another_function() {
    std::lock_guard<std::mutex> lock(mtx);
    // critical section
}
```

- `std::lock_guard` automatically locks the mutex when created and unlocks when destroyed.

## 3. Condition Variables

Condition variables provide a mechanism for threads to wait (block themselves) until notified to continue.

```cpp
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;

bool ready = false;

void function_name() {
    std::unique_lock<std::mutex> lock(mtx);
    while(!ready) {
        cv.wait(lock);
    }
    // continue when notified
}

int main() {
    std::thread t1(function_name);  
    // some code
    ready = true;
    cv.notify_one();  
    t1.join();  
}
```

- `wait()` releases the mutex and suspends the execution of the thread.
- `notify_one()` wakes up one waiting thread.

## 4. Semaphores

Semaphores are a synchronization primitive that can be used to control access to a shared resource. C++20 introduced the `std::counting_semaphore` in the `<semaphore>` header.

```cpp
#include <semaphore>

std::counting_semaphore<10> sem(5);  // max 10, initially 5

void function_name() {
    sem.acquire(); 
    // critical section
    sem.release();
}

// or using try_acquire

void another_function() {
    if(sem.try_acquire()) {
        // critical section
        sem.release();
    }
}
```

- `acquire()` decrements the semaphore and blocks if it's zero.
- `release()` increments the semaphore and potentially wakes a waiting thread.