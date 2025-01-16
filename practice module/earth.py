import webbrowser
def find_city(city_name):
    google_earth_url=f'https://earth.google.com/web/search/(city_name)'

    webbrowser.open(google_earth_url)

    city_name = input("enter city name: ")
find_city(city_name)