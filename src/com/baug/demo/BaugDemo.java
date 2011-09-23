package com.baug.demo;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class BaugDemo extends Activity {
	static {
		System.loadLibrary("baug-demo");
	}

	public native int add (int x, int y);

	/** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        
        TextView tv = new TextView(this);
		int x = 1000, y = 1044;
		int z = add(x, y);

		tv.setText("The sum of " + x + " and " + y + " is " + z);
		setContentView(tv);
    }
}