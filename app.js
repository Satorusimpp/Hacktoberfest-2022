const express = require('express')
const https = require('https') //make get request to external server with node// https is a native node module, so installation required
const bodyParser = require('body-parser')

const app = express()
app.use(express.static("public"));
app.use(bodyParser.urlencoded({ extended: true }))

app.get('/', function (req, res) {
  res.sendFile(__dirname + '/index.html')
})

app.post('/', function (req, res) {
 
  const query = req.body.cityName 
  const apiKey = '485ebe33100cad075e3d459c62a12267'
  const unit = 'metric'
  const url =
    'https://api.openweathermap.org/data/2.5/weather?q=' +
    query +
    '&appid=' +
    apiKey +
    '&units=' +
    unit //url is weatherapi endpoint

  https.get(url, function (response) {
   
    response.on('data', function (data) {
      //calling the method 'on' and tapping into the event when data was received from weatherAPI
      const weatherData = JSON.parse(data) //logs data in neater and organised way in the form on JSON
      const temp = weatherData.main.feels_like
      const description = weatherData.weather[0].description
      const icon = weatherData.weather[0].icon
      const imageURL = 'http://openweathermap.org/img/wn/' + icon + '@2x.png'
      console.log(temp)
      console.log(description)
      res.write('<p>The weather is currently ' + description + '<p>')
      res.write(
        '<h1>The weather in ' + query + ' is ' + temp + ' degree celsius.</h1>'
      )
      res.write('<img src=' + imageURL + '>')
      res.send()
    })
  })
})

app.listen(3000, function () {
  console.log('server is running on the port 3000')
})
