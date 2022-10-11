const express = require("express");
const bodyParser = require("body-parser");


const app = express();
app.use(express.static("public"));
app.use(bodyParser.urlencoded({extended: true}));



app.get("/",function(req,res){
    res.sendFile(__dirname + "/bmiCalculator.html")
    
});

app.post("/bmiCalculator",function(req,res){
    var weight= parseFloat(req.body.weight);
    var height= parseFloat(req.body.height);

    var bmi=weight/(height*height);
    if(bmi<=18.5)
    res.send("       You are Underweight and your bmi is "+bmi);
    if(bmi>18.5 && bmi<24.5)
    res.send("      You are normal and your bmi is "+bmi);
    if(bmi>24.5)
    res.send("     You are overweight and your bmi is "+bmi);

});

app.listen(3000,function()
{
    console.log("server is running on port 3000");
});

