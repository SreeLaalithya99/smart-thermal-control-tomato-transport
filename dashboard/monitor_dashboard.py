import streamlit as st
import pandas as pd

st.title("Tomato Transport Thermal Monitoring System")

# Load the sample data
data = pd.read_csv("../data/temperature_log.csv")

st.subheader("Temperature Monitoring Dashboard")

st.line_chart(data["temperature"])

st.write("Real-time temperature monitoring helps prevent tomato spoilage during transportation.")
