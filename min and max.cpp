//Anjaneya Kalchuri
//24070123015
//ENTC-A1

for(int i = 1; i < size; i++) {
        if(array[i] < min)
            min = array[i];
        if(array[i] > max)
            max = array[i];
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
