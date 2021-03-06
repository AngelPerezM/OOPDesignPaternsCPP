/*******************************************************************************
* WeatherData.cpp
* 12/08/2020
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "WeatherData.h"			// Class declaration
#include <iostream>
#include <algorithm>				// for std::remove

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/

WeatherData::WeatherData () {
	mTemperature = 0;
	mHumidity = 0;
	mPressure = 0;
}

WeatherData::~WeatherData () {
}

void WeatherData::attach(Observer *observer) {
	mObservers.push_back(observer);
}

void WeatherData::detach(Observer *observer) {
	mObservers.erase(std::remove(mObservers.begin(), mObservers.end(), observer), mObservers.end());
}

void WeatherData::notify() {
	for(std::vector<Observer *>::iterator it = mObservers.begin();
		it < mObservers.end();
		++it) {
		(*it)->update();
	}
}

void WeatherData::measurementsChanged() {
	notify();
}

void WeatherData::setMeasurements(const float temperature, const float humidity, const float pressure) {

	mTemperature = temperature;
	mHumidity = humidity;
	mPressure = pressure;
	measurementsChanged();
}

float WeatherData::getTemperature() const {
	return mTemperature;
}

float WeatherData::getHumidity() const {
	return mHumidity;
}

float WeatherData::getPressure() const{
	return mPressure;
}