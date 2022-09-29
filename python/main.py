import phonenumbers
from test import number
from phonenumbers import geocoder
from phonenumbers import carrier
key='f831fd64b4e64c638b568f747a001187'
from opencage.geocoder import OpenCageGeocode
ch_nmber=phonenumbers.parse(number,"CH")
loc=geocoder.description_for_number(ch_nmber,"en")
print(loc)
service_provider=phonenumbers.parse(number)
print(carrier.name_for_number(service_provider,"en"))
geocoder=OpenCageGeocode(key)
query=str(loc)
results=geocoder.geocode(query)
#print(results)
lat=results[0]['geometry']['lat']
lng=results[0]['geometry']['lng']
print(lat,lng)






